/*
  +----------+
  | Better.  |
  | Call.Vee |
  +----+-----+
       |
       V
created: 19th September, 2023 19:34:26 GMT+6
https://codeforces.com/contest/1870/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
// another smart bitwise problem
int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        // i will be given two arrays. I have to output the maximum and
        // minimum value suppose x, which will be the XOR of all elements
        // from the 'a' array. I can do as many operations as I want on the
        //'a' array's elements by ORing with 'b' array's elements.
        int n, m, b;
        cin >> n >> m;

        vector<int> a(n); // at first আমরা array 'a' এবং ইনপুট নিয়ে নিলাম
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ORvalue = 0; 
        // এই ভ্যারিয়েবলটি 'b' array এর জন্য। এখানে b array এর
        // সকল এলিমেন্টের অর ভ্যালু স্টোর করবো। চিন্তা আসতে পারে যে কেন সকল ভ্যালুর
        // অর নিবো? আমরা যতো গুলো সংখ্যার অর ই করি না কেন, একটা set bit থাকলে
        // অর এর রেজাল্ট ১ থেকে কেউ পরিবর্তন করতে পারবে না। প্রব্লেম স্টেটমেন্ট অনুযায়ী
        // আমরা বি অ্যারে এর সকল এলিমেন্ট দিয়েই এ অ্যারে এর উপর অর অপারেশন চালাতে
        // পারবো। তো আমাদের উদ্দেশ্য হলো মিনিমাম আর ম্যাক্সিমাম পসিবল জর ভ্যালু বের করা
        // এ অ্যারে থেকে। জর এর ভ্যালু ম্যাক্সিমাম কখন হয়?
        // যখন বিজোড় সংখ্যক ১ থাকে।
        // আর যখনই বিজোড় সংখ্যক এলিমেন্ট এ অ্যারে তে থাকবে, আমরা এমনিতেই যে জর
        // বের করবো এ অ্যারের, সেইটা হবে ওর ম্যাক্সিমাম x । কিভাবে? ৩ আর ১ এর জর করো।
        // কতো আসে? ২। তো এখানে যদি আবার আলাদা করে বি অ্যারে এর এলিমেন্ট দিয়ে অর করে
        // পুনরায় জর হিসাব করো, দেখবে ০ আসতেসে। কারণ? অই অর করলেই তোমার এ অ্যারেতে
        // যতোগুলো শূ্ন্যের ঘাটতি আছে, তার বেশিরভাগে ১ চলে আসবে! ফলস্বরূপ, যেহেতু জোড় সংখ্যক
        // এলিমেন্ট, জর ভ্যালু দাঁড়াবে ০ তে। কথা বুঝে আসছে? বিজোড় সংখ্যক এলিমেন্টের ক্ষেত্রে কাহিনী
        // পুরো উল্টা

        for (int i = 0; i < m; i++)
        {
            cin >> b;
            ORvalue |= b; //একেবারেই সেট করে রাখলাম। কারণ উপরে বর্ণীত
        }

        int realXOR = 0, modXOR = 0; //একটা কোনোরকম অর ছাড়া জর, আরেকটা অর সহ জর।
        for (int i = 0; i < n; i++)
        {
            realXOR ^= a[i]; //ডিরেক্ট জর
            modXOR ^= (a[i] | ORvalue); //অর করা জর
        }

        cout << min(realXOR, modXOR) << " " << max(realXOR, modXOR) << "\n"; 
        //দিনশেষে দুইটা জরের মিনিমাম আর ম্যাক্সিমাম প্রিন্ট করলেই খেলা শেষ
    }

    return 0;
}