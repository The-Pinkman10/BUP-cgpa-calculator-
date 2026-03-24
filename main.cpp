#include<bits/stdc++.h>
using namespace std;

class big_course
{
    float obs=8;
    public:
    string name;
    float att;
    float pres;
    float mid;
    float final;
    float ct;
    float sum=0;
    float ob=obs;
};

class medium_course
{
    float obs=8;
    public:
    string name;
    float quiz, viva,att,assi,sum=0;
    float ob=obs;
};

class small_course
{
    float obs=8;
    public:
    string name;
    float quiz, viva,att,assi,sum=0;
    float ob=obs;
};

float points(float a)
{
    if   (a<=100 && a>=80) return 4;
    else if(a<80 && a>=75) return 3.75;
    else if(a<75 && a>=70) return 3.5;
    else if(a<70 && a>=65) return 3.25;
    else if(a<65 && a>=60) return 3;
    else if(a<60 && a>=55) return 2.75;
    else if(a<55 && a>=50) return 2.5;
    else if(a<50 && a>=45) return 2.25;
    else if(a<45 && a>=40) return 2;
    else return 0;
}

int main()
{
    cout<<"Hello and welcome to BUP CGPA calculator\n";
    cout<<"What's your choice ? \n";
    int a;
    cout<<"1. Calculating CGPA of one semester\n"<<"2. Calculating CGPA of one year \n";
    cin>>a;
    switch(a)
    {
        case 1:
        {   int n;    
            cout<<"How many courses do you have?\n";
            cin>>n;
            int p,q,r;
            cout<<"Among them how many courses are of credit 3?\n";
            cin>>p;
            cout<< "How many are of credit 1.5?\n";
            cin>>q;
            cout<<"And how many are of credit 0.75?\n";
            cin>>r;

            big_course arr[p];
            float res_3[p];

            medium_course brr[q];
            float res_1_5[q];

            small_course crr[r];
            float res_0_75[r];

            for(int i=0;i<p;i++)
            {
                cin.ignore();
                cout<<"\nWhat's the name of your course no "<<i+1<<" of credit 3?\n";
                getline(cin,arr[i].name);
                cout<<"\nWhat's your ATTENDANCE mark for course "<<arr[i].name<<"\n";
                cin>>arr[i].att;
                if(arr[i].att>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your CLASS-TEST mark for course "<<arr[i].name<<"\n";
                cin>>arr[i].ct;
                if(arr[i].ct>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your PRESENTATION mark for course "<<arr[i].name<<"\n";
                cin>>arr[i].pres;
                if(arr[i].pres>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your MID-EXAM mark for course "<<arr[i].name<<"\n";
                cin>>arr[i].mid;
                if(arr[i].mid>20)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your FINAL mark for course "<<arr[i].name<<"\n";
                cin>>arr[i].final;
                if(arr[i].final>40)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }

                arr[i].sum=arr[i].att+arr[i].ct+arr[i].pres+arr[i].mid+arr[i].final+arr[i].ob;

                res_3[i]=points(arr[i].sum);
            }

            for(int i=0;i<q;i++)
            {
                cin.ignore();
                cout<<"\nWhat's the name of your course no "<<i+1<<" of credit 1.5?\n";
                getline(cin,brr[i].name);
                cout<<"\nWhat's your ATTENDANCE mark for course "<<brr[i].name<<"\n";
                cin>>brr[i].att;
                if(brr[i].att>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your QUIZ mark for course "<<brr[i].name<<"\n";
                cin>>brr[i].quiz;
                if(brr[i].quiz>20)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your VIVA mark for course "<<brr[i].name<<"\n";
                cin>>brr[i].viva;
                if(brr[i].viva>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your ASSIGNMENT mark for course "<<brr[i].name<<"\n";
                cin>>brr[i].assi;
                if(brr[i].assi>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                brr[i].sum=brr[i].att+brr[i].quiz+brr[i].viva+brr[i].assi+brr[i].ob;
                brr[i].sum=(brr[i].sum*100.00)/60.00;

                res_1_5[i]=points(brr[i].sum);
            }

            for(int i=0;i<r;i++)
            {
                cin.ignore();
                cout<<"\nWhat's the name of your course no "<<i+1<<" of credit 0.75?\n";
                getline(cin,crr[i].name);
                cout<<"\nWhat's your ATTENDANCE mark for course "<<crr[i].name<<"\n";
                cin>>crr[i].att;
                if(crr[i].att>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your QUIZ mark for course "<<crr[i].name<<"\n";
                cin>>crr[i].quiz;
                if(crr[i].quiz>20)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your VIVA mark for course "<<crr[i].name<<"\n";
                cin>>crr[i].viva;
                if(crr[i].viva>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                cout<<"\nWhat's your ASSIGNMENT mark for course "<<crr[i].name<<"\n"; 
                cin>>crr[i].assi;
                if(crr[i].assi>10)
                {
                    cout<<"Invalid input\n";
                    return 0;
                }
                crr[i].sum=crr[i].att+crr[i].quiz+crr[i].viva+crr[i].assi+crr[i].ob;
                crr[i].sum=(crr[i].sum*100.00)/60.00;

                res_0_75[i]=points(crr[i].sum);
            }

            float total_sum=0;
            for(int i=0;i<p;i++)
            {
                total_sum+=3*res_3[i];
            }
            for(int i=0;i<q;i++)
            {
                total_sum+=1.5*res_1_5[i];
            }
            for(int i=0;i<r;i++)
            {
                total_sum+=0.75*res_0_75[i];
            }

            float cg=total_sum/(3*p + 1.5*q + 0.75*r);
            cout<<fixed<<setprecision(2)<<cg;
            break;
        }

        case 2:
        
        {    float m;
            cout<<"\nEnter your CGPA of 1st semester of this year : ";
            cin>>m;
            float p;
            cout<<"\nEnter total credit of that semister : ";
            cin>>p;

            float n;
            cout<<"\nEnter your CGPA of 2nd semester of this year : \n";
            cin>>n;
            float q;
            cout<<"\nEnter total credit of that semister : ";
            cin>>q;

            cout<<"\nYour CGPA for this semester is "<<fixed<<setprecision(2)<<((m*p)+(n*q))/(p+q);
            break;
        }
    }
    return 0;
}