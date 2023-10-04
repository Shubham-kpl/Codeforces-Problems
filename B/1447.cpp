/**

* कर्मण्येवाधिकारस्ते मा फलेषु कदाचन, मा कर्मफलहेतुर्भुर्मा ते संगोऽस्त्वकर्मणि ॥ *

* The code below is:
* Coded on : 16/09/2023
* Coded by: Shubham Kandpal

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i, n) for (ll i = 0; i < n; i++)
#define vi(v) vector<ll> v
#define sv(v) sort(v.begin(), v.end())
#define sa(a) sort(a, a + n)

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll val, cnt = 0, mini = INT_MAX, sum = 0;
    f(i, n * m)
    {
        cin >> val;
        mini = min(mini, abs(val));
        sum += abs(val);
        if (val < 0)
            cnt++;
    }
    if (cnt % 2 == 0)
        cout << sum << endl;
    else
    {
        cout << sum - 2 * mini << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*

I have a passion for computer science. I have always been amazed by the technology around us, and the part that attracts me the most is the intense dynamic nature of the computer science field, the speed with which technology enhances day-by-day is truly admirable. I always wanted to work and explore logical fields, those including mathematics, physics. Then after my intermediate, an elder neighbour of mine told me to pursue computer science in college. Truly speaking, I, initially chose the branch because according to me, I could give my best in just this one.  */

/*

I am an aspiring, hardworking computer science student. I want to become a successful software engineer. I always try to put my best in any work I do, may it be academics, programming or even learning new things, I believe that with planned hard work, anything could be done. Currently I stand in the top five students of my batch (in terms of academics).
I firmly believe I deserve this scholarship due to my ambitions in life, ambitions that are not just limited to my own selfishness but also include welfare of society as well. I am committed to contribute to the needy people in future, if I became able to do so. I believe its the responsibility of one who is capable to help those who are unable to achieve their dreams due to some barriers. But before that, first I have to be in my own feet and all this will happen if at present I continue my studies and preparation with all my concentration.
But unfortunately due to financial constraints, it is becoming harder for me to fully concentrate in my preparation. The financial issues pertain in the mind and disturb me all the time. Talking about the current scenario at my home, my younger brother is in class XII and just after few months he too would be joining a college. Currently just my college fees worth more than half of our total family expenses. My father is the only income source in our family and at present they could barely manage for the current household expenses. And so if the same situation persists it may not be possible for my brother to continue his studies.
In this case, if I get this scholarship, I promise to put my best in becoming a successful engineer, after which I will hold my commitment to provide selfless service to the financially needy ones. This one scholarship will not only save my career but also of my brother and will ultimately result in the welfare of the society.*/

/*
I want to become successful software engineer and serve our nation through my technical knowledge and programming skills. To achieve my career goals, I regularly explore new entries in the technology domain and side-by-side enhance my problem solving abilities by implementing the progamming knowledge that I have to solve coding problems, which will later help in solving problems related to real world.
My career ambition is to provide my best possible contribution to the organization that I will work for. My primary aim is to be able to work for either the Defense Research & Development Organization (DRDO) or the Indian Space Research Organization (ISRO). This is because it feels fascinating to me to work with the precious diamonds of our nation, with those talented minds that always come with the best solution out of limited resources. I would find myself grateful if I could use my knowledge to contribute to their further growth. However, if didn't get that chance, I would prefer to contribute to the highly emerging and innovative startup sector of our country as I believe these are a sole contributor of the beautiful future of our nation in terms of growth and development. 
I want to design and work with those technologies, that besides being useful to us, are harmless to nature. I want to work in those projects where the growth is a measure of mutual growth, sustainable development and effective utilization of available resources.
Apart from these professional achievements, I want to engage myself in social welfare activities. Like providing financial support to talented individuals who are unable to pursue their dreams because of financial barriers, sponsoring education of the needy children, providing finance and accessories to the organizations that work for social welfare and with any other possible ways that will be in my control.
*/
