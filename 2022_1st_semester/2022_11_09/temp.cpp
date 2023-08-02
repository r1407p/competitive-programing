1 #include <bits/stdc++.h>
 2 
 3 using namespace std;
 4 
 5 #define N 100010
 6 
 7 typedef long long ll;
 8 
 9 int t, n;
10 ll arr[N];
11 ll x, y;
12 
13 inline ll GCD(ll a, ll b)
14 {
15     return b == 0 ? a : GCD(b, a % b);
16 }
17 
18 int main()
19 {
20     scanf("%d", &t);
21     while (t--)
22     {
23         scanf("%d", &n);
24         scanf("%lld%lld", &x, &y);
25         for (int i = 1; i <= n; ++i) scanf("%lld", arr + i); 
26         if (y % x)
27         {
28             puts("-1");
29             continue;
30         }
31         if(n == 1 && x != y)
32         {
33             puts("-1");
34             continue;
35         }
36         int ans = 0; 
37         ll gcd = y, lcm = x;  
38         for (int i = 1; i <= n; ++i)
39         {
40             if(arr[i] % x || y % arr[i]) ++ans;
41             else
42             {
43                 gcd = GCD(gcd, arr[i]);
44                 lcm = lcm * arr[i] / GCD(lcm, arr[i]);
45             }
46         }
47         if (ans >= 2) 
48             printf("%d\n", ans);
49         else if(ans == 1)
50         {
51             if(gcd != x && lcm != y && GCD(y / gcd, lcm / x) != 1)
52             {
53                 puts("2");
54             }
55             else
56             {
57                 puts("1");
58             }
59         }
60         else 
61         {
62             if(x == gcd && y == lcm)
63             {
64                 puts("0");
65             }
66             else if(x != gcd && y != lcm && GCD(x / gcd, lcm / y) != 1)
67             {
68                 puts("2");
69             }
70             else 
71             {
72                 puts("1");
73             }
74         }
75     }
76     return 0;
77 }
-----------------------------------
ACM ICPC, Damascus University Collegiate Programming Contest(2018) Solution
https://blog.51cto.com/u_15127589/3544377