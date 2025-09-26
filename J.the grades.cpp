#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int a, m, s, e;
    int total;

    void calculateTotal()
    {
        total = a + m + s + e;
    }
};

bool cmp(const Student& x, const Student& y)
{
    if (x.total != y.total)
        return x.total > y.total;
    return x.name < y.name;
}

int main()
{
    int n;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].a >> students[i].m >> students[i].s >> students[i].e;
        students[i].calculateTotal();
    }

    sort(students.begin(), students.end(), cmp);

    for (auto& st : students)
    {
        cout << st.name << " " << st.total << " " << st.a << " " << st.m << " " << st.s << " " << st.e << "\n";
    }

    return 0;
}
