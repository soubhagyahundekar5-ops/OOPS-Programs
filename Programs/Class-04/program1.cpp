//adding 2 objects(3/09/2026)
 #include<iostream>
 using namespace std;
 class Time
 {
    int hour;
    int minute, second;
 public:
     void SetTime(int h,int m, int s)
     {
         hour=h;
         minute=m;
         second=s;
     }
     void displaytime()
     {
         cout<<"hour:"<<hour<<endl;
         cout<<"minute:"<<minute<<endl;
         cout<<"second:"<<second<<endl;
     }
     void addtime(Time t1,Time t2)
     {
         hour =t1.hour+t2.hour;
          minute =t1.minute+t2.minute;
          second =t1.second+t2.second;
     }

 };
 int main()
 {
     Time t1,t2,t3;
     t1.SetTime(9,30,30);
     cout<<"1st time:"<<endl;
     t1.displaytime();
     t2.SetTime(2,10,15);
      cout<<"2nd time:"<<endl;
     t2.displaytime();
     t3.addtime(t1,t2);
     cout<<"total time:"<<endl;
     t3.displaytime();
     return 0;

 }
