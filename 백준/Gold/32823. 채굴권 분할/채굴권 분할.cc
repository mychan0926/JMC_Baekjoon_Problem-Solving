#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

#define PI 3.14159265358979323846

struct Point {
    double x, y;
};

vector<pair<Point, Point>> lines; 

Point calcul(double angle, double dir) {
    double rad = (angle / 10.0) * PI / 180.0;
    return { dir * cos(rad), dir * sin(rad) };
}

double ccw(Point p1, Point p2, Point p3) {
    return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}

bool isIntersect(Point A, Point B, Point C, Point D) {
    double ab_c = ccw(A, B, C);
    double ab_d = ccw(A, B, D);
    double cd_a = ccw(C, D, A);
    double cd_b = ccw(C, D, B);

    return (ab_c * ab_d < 0) && (cd_a * cd_b < 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;
    for (int i = 0; i < n; i++) {
        double t1, t2;
        cin >> t1 >> t2;
        lines.push_back({ calcul(t1, 1000), calcul(t2, 1000) });
    }

    double a1, a2, b1, b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    Point p1 = calcul(a1, a2);
    Point p2 = calcul(b1, b2);

    int counting = 0;
    for (int i = 0; i < n; i++) {
        if (isIntersect(lines[i].first, lines[i].second, p1, p2)) {
            counting++;
        }
    }

    cout << (counting % 2 == 0 ? "YES" : "NO") << "\n";
    return 0;
}