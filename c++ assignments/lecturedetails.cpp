 #include<iostream>
using namespace std;

class Lecture{
	public:
		string lname1,sub1,course1,lname2,sub2,course2,lname3,sub3,course3,lname4,sub4,course4,lname5,sub5,course5;
		int number1, number2, number3, number4, number5;
		
		
		   void lecdetails()
		   {
		   	    cout<<endl;
		   	    cout<<"---------Lecture Details----------"<<endl<<endl;
		   	    cout<<"Enter Name of Lecturer:";
		   	    cin>>lname1;
		   	    cout<<"Enter Name of Course :";
		   	    cin>>course1;
		   	    cout<<"Enter Name of Subject :";
		   	    cin>>sub1;
		   	    cout<<"Enter Number of Lecture :";
		   	    cin>>number1;
		   	    cout<<endl<<endl;
		   	    cout<<"------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Enter Name of Lecturer:";
		   	    cin>>lname2;
		   	    cout<<"Enter Name of Course :";
		   	    cin>>course2;
		   	    cout<<"Enter Name of Subject :";
		   	    cin>>sub2;
		   	    cout<<"Enter Number of Lecture :";
		   	    cin>>number2;
		   	    cout<<endl<<endl;
		   	    cout<<"------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Enter Name of Lecturer:";
		   	    cin>>lname3;
		   	    cout<<"Enter Name of Course :";
		   	    cin>>course3;
		   	    cout<<"Enter Name of Subject :";
		   	    cin>>sub3;
		   	    cout<<"Enter Number of Lecture :";
		   	    cin>>number3;
		   	    cout<<endl<<endl;
		   	    cout<<"------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Enter Name of Lecturer:";
		   	    cin>>lname4;
		   	    cout<<"Enter Name of Course :";
		   	    cin>>course4;
		   	    cout<<"Enter Name of Subject :";
		   	    cin>>sub4;
		   	    cout<<"Enter Number of Lecture :";
		   	    cin>>number4;
		   	    cout<<endl<<endl;
		   	    cout<<"------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Enter Name of Lecturer:";
		   	    cin>>lname5;
		   	    cout<<"Enter Name of Course :";
		   	    cin>>course5;
		   	    cout<<"Enter Name of Subject :";
		   	    cin>>sub5;
		   	    cout<<"Enter Number of Lecture :";
		   	    cin>>number5;
		   	    cout<<endl<<endl;
		   	    cout<<"------------------------------"<<endl<<endl;
		   }
		   
		   void print()
		   {
		   	    cout<<"****************************************"<<endl<<endl;
		   	    cout<<"**********Lecture Details Are***********"<<endl<<endl;
		   	    cout<<"****************************************"<<endl<<endl;
		   	    cout<<"Lecturer Name   :"<<lname1<<endl<<endl;
		   	    cout<<"Course Name     :"<<course1<<endl<<endl;
		   	    cout<<"Subject Name    :"<<sub1<<endl<<endl;
		   	    cout<<"Lecture Number  :"<<number1<<endl<<endl;
		   	    
		   	    cout<<"----------------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Lecturer Name   :"<<lname2<<endl<<endl;
		   	    cout<<"Course Name     :"<<course2<<endl<<endl;
		   	    cout<<"Subject Name    :"<<sub2<<endl<<endl;
		   	    cout<<"Lecture Number  :"<<number2<<endl<<endl;
		   	    
		   	    cout<<"----------------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Lecturer Name   :"<<lname3<<endl<<endl;
		   	    cout<<"Course Name     :"<<course3<<endl<<endl;
		   	    cout<<"Subject Name    :"<<sub3<<endl<<endl;
		   	    cout<<"Lecture Number  :"<<number3<<endl<<endl;
		   	    
		   	    cout<<"----------------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Lecturer Name   :"<<lname4<<endl<<endl;
		   	    cout<<"Course Name     :"<<course4<<endl<<endl;
		   	    cout<<"Subject Name    :"<<sub4<<endl<<endl;
		   	    cout<<"Lecture Number  :"<<number4<<endl<<endl;
		   	    
		   	    cout<<"----------------------------------------"<<endl<<endl;
		   	    
		   	    cout<<"Lecturer Name   :"<<lname5<<endl<<endl;
		   	    cout<<"Course Name     :"<<course5<<endl<<endl;
		   	    cout<<"Subject Name    :"<<sub5<<endl<<endl;
		   	    cout<<"Lecture Number  :"<<number5<<endl<<endl;
		   	    
		   	    cout<<"----------------------------------------"<<endl<<endl;
		   	
		   	}	
		   
};
		   
int main()
{
	Lecture l1;
	l1.lecdetails();
	l1.print();
		   
	
	return 0;
	
}