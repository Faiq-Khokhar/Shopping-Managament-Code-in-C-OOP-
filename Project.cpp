 //Project : SHOPPING MANAGEMENT//

#include<iostream>
#include<stdlib.h>             //For colors
#include<string.h>             //For strings

using namespace std;
/*
1.class
2.friend function
3.friend class
4.operator overloading
5.overloading
6.overriding
7.constructor overloading
8.static function
9.static member
10.inheritence herarical
11.this pointer
12.pointer
13.arow operator
14.(.)operator
15.


*/
class shopping{               //Abstract class due to Pure Virtual Function
	public:
	virtual void fun()=0;     //Pure virtual function
};

class item                    //Base Class ( Heirarichal inheritance )
 {
    protected:
        char name[20][20];
        float price[20];
        int sum,code[20];

    public:
        item()
        {
         sum=0;
         temp=0;
        }
        
		char catagory[20];
        int temp;
        void insert();
        void add();
        void display();
        void search();
        void remove();
        void total_amount();
        void catago_amount();
        void error1();
        void initial_task();
        int function1();
        
        friend class cloth;
		
		void fatah(){
		}
		
		void fatah(int aa){
		   int bb=aa;
		}
		
		    static int op;
		    
		    static stats(){
		    	cout<<op;
		    	op++;
			}
		
		};
     
     int item::op=0;
     
	 void item::insert()
   {
    int i,n,k;
    cout<<"Enter Catagory Name=";
    cin>>catagory;
    cout<<"How many item do u want to insert =";
    cin>>n;
    
	for(i=temp;i<n;i++)
    {
      cout<<"Enter name of the item=";
      cin>>name[temp];
      cout<<"Enter code=";
      cin>>code[temp];
      cout<<"Enter price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   }
     
	 void item::add()
   {
    int i,n;
    cout<<"Enter catagory name=";
    cin>>catagory;
    cout<<"How many item do u want to add =";
    cin>>n;
    
	for(i=temp;i<n;i++)
    {
      cout<<"Enter name of the iteam=";
      cin>>name[temp];
      cout<<"Enter code=";
      cin>>code[temp];
      cout<<"Enter price=";
      cin>>price[temp];
      temp++;
      sum=sum+price[i];
    }
   }
     
	 void item::display()
  {
    int i;
    cout<<"Under the "<<catagory<<" catagory, the items are:"<<'\n'<<'\n';
    cout<<"Item name"<<'\t';
    cout<<"Code"<<'\t';
    cout<<"Price"<<'\t'<<'\n';
    
	for(i=0;i<temp;i++)
    {

      cout<<name[i]<<'\t'<<'\t';
      cout<<code[i]<<'\t';
      cout<<price[i]<<'\n'<<'\n';
     }
     cout<<'\n'<<'\n';
   }
    
	void item::search()
  {
      int i,m;
      cout<<"Enter code:";
      cin>>m;
      for(i=0;i<temp;i++)
      {
    
	if(code[i]==m)
    {
    cout<<"Item name is ="  <<name[i]<<'\n';
    cout<<"Price is="<<price[i]<<'\n'<<'\n';
    }
    
	else
    cout<<"You have entered wrong code"<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
     
	 void item::remove()
  {
      int i,m;
      cout<<"Enter code:";
      cin>>m;
      
	  for(i=0;i<temp;i++)
      {
    if(code[i]==m)
    {
      price[i]=0;
    }
    
	else
    cout<<"You have entered wrong code"<<'\n'<<'\n';
      }
      cout<<'\n'<<'\n';
  }
    
	void item::total_amount()
    {
     cout<<"The total price of all the items of all catagories is="<<sum<<'\n'<<'\n';
    }
    
	void item :: catago_amount()
    {
    cout<<"Under the "<<catagory<<" catagory, the total price of the items are="<<sum<<'\n'<<'\n';
    }
    
	void item::error1()
    {
      cout<<"FIRST U NEED TO INSERT ITEM";
      cout<<'\n'<<'\n';
    }
    
	void item::initial_task()
    {
    	
  cout<<"What do u want to do ?"<<'\n';
  cout<<"1.If u want to insert, Press 1"<<'\n';
  cout<<"2.If u want to add, Press 2"<<'\n';
  cout<<"3.If u want to display, Press 3"<<'\n';
  cout<<"4.if u want to search, Press 4"<<'\n';
  cout<<"5.if u want to remove, Press 5"<<'\n';
  cout<<"6.if u want to see the total price, Press 6"<<'\n';
  cout<<"7.if u want to exit, Press 0"<<'\n';
    }
    
	int item::function1()
    {
    int a1;
    
    cout<<"Choose a option to enter from the following sites:"<<'\n';
    cout<<"1.Press 1 for Clothes."<<'\n'<<"2.Press 2 for Daily using thing."<<'\n'
    <<"3.Press 3 for Raw materials."<<'\n'<<"4.Press 0 for Exit."<<'\n';
    cin>>a1;
    return a1;
    }
    
	class cloth:public item
    {
    private:
        char clt[15],cr[15];
    public:
       cloth operator+(cloth);
       void insert_cl();
       void display_cl();
       
       		void fatah(){
		}
		
		friend void fun();
    };
    
    void fun(){
    	cout<<"\n\n\nWelcome To our shop\n\n\n";
	}
   
   cloth cloth::operator+(cloth c)
   {
     cloth ob1;
     ob1.sum=sum+c.sum;
     return (ob1);
   }
   
   void cloth::insert_cl()
   {
   cout<<"What type of cloth is this ? ( cotton, polyster, linen, ...... )"<<'\n';
   cin>>clt;
   cout<<"What's the color of the cloth : ";
   cin>>cr;
   cout<<'\n'<<'\n'<<'\n';
   }
   
   void cloth::display_cl()
   {
   cout<<"Type :"<<clt<<'\n';
   cout<<"Color :"<<cr<<'\n'<<'\n'<<'\n';
   }

class dusing:public item
    {
      private:
          char dus[15];
      public:
       dusing operator+(dusing);
       void insert_du();
       void display_du();
    };

dusing dusing::operator+(dusing c)
   {
     dusing ob2;
     ob2.sum=sum+c.sum;
     return (ob2);
   }

void dusing::insert_du()
   {
    cout<<"What type of Daily using thing is this ?( Food, Cosmetics, .......)"<<'\n';
    cin>>dus;
    cout<<'\n'<<'\n'<<'\n';
   }

void dusing::display_du()
   {
    cout<<"Type :" <<dus<<'\n'<<'\n'<<'\n';
   }

class material:public item
    {
    private:
        int sp;
        char mat[14],qu[15];
    public:
    	material()
       {
	   }
    	material(int a)
	   {
	   	cout<<"\n\nOur Vision is To provide healty enviornment for Shop\n\n";
	   }
      material operator+(material c);
       void insert_ma();
       void display_ma();
	   
    };

material material::operator+(material c)
    {
     material ob3;
     ob3.sum=sum+c.sum;
     return (ob3);
    }

void material::insert_ma()
    {
    cout<<"What type of Raw material is this ? ( vegetable, fish, fruits, .......)"<<'\n';
    cin>>mat;
    cout<<"What kind of quality do it carry ?"<<'\n';
    cin>>qu;
    cout<<"Nomally after how many days it will be spoiled ?"<<'\n';
    cin>>sp;
    cout<<'\n'<<'\n'<<'\n';
    }

void material::display_ma()
    {
    cout<<"Type :" <<mat<<'\n';
    cout<<"Quality :" <<qu<<'\n';
    cout<<"The time after which it will spoil:" <<sp<<'\n'<<'\n'<<'\n';
    }

int main()
 {
 	
 	system("Color A1");          //Specifing which color will use

	cloth t[20],f1,ob;
    material met(1);
    dusing du[20],f2,ob1;
    material ma[20],f3,ob2;
    int i,x=0,n,a,j,k,l,s,m,b,c,q,g=0,a1,y=0,z=0;
    char inp[20];
   system("CLS");
    
	for(i=0;;i++)
    {
    a1=ob.function1();
    
	switch(a1)
    {
    case 1:
    for(i=0;;i++)
     {
       ob.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(x>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONE TIMES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many catagories do u want to insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              t[x].insert();
              t[x].insert_cl();
               x++;
             }
          }
         break;
      case 2:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
           cout<<"How many catagories do u want to add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             t[x].add();
             t[x].insert_cl();
              x++;
             }
          break;
          }
       case 3:
        if(x<=0)
        {ob.error1();
        break;}
         else
         {
          for(s=0;s<x;s++)
           {
             t[s].display();
             t[s].display_cl();
           }
           break;
         }
       case 4:
        if(x<=0)
        {ob.error1();
        break;}
        if(x>0)
        {
         cout<<"Enter ur Desired catagory=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(inp,t[c].catagory);
           if(b==0)
           break;
          }
          if(b==0)
            {t[c].search();
            t[c].display_cl();}
           break;
          }
        case 5:
        if(x<=0)
        {ob.error1();
          break;}
        else
        {
         cout<<"Enter ur Desired catagory=";
         cin>>inp;
         for(c=0;c<x;c++)
         {
           b=strcmp(t[c].catagory,inp);
           if(b==0)
           break;
          }
          if(b==0)
            t[c].remove();
           break;
          }
         case 6:
        if(x<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f1=f1+t[z];
            g++;
          }
        for(i=0;i<x;i++)
        t[i].catago_amount();
        f1.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 2:
    for(i=0;;i++)
     {
       ob1.initial_task();
       cin>>a;
    
	switch(a)
       {
     case 1:
        if(y>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONE TIMES."<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many catagories do you want to insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              du[y].insert();
              du[y].insert_du();
               y++;
             }
          }
         break;
      case 2:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
           cout<<"How many catagories do u want to add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             du[y].add();
             du[y].insert_du();
              y++;
             }
          break;
          }
       case 3:
        if(y<=0)
        {ob1.error1();
        break;}
         else
         {
          for(s=0;s<y;s++)
           {
             du[s].display();
             du[s].display_du();
           }
           break;
         }
       case 4:
        if(y<=0)
        {ob.error1();
        break;}
        if(y>0)
        {
         cout<<"Enter ur Desired catagory=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(inp,du[c].catagory);
           if(b==0)
           break;
          }
          if(b==0)
           { du[c].search();
            du[c].display_du();}
           break;
          }
        case 5:
        if(y<=0)
        {ob1.error1();
          break;}
        else
        {
         cout<<"Enter ur Desired catagory=";
         cin>>inp;
         for(c=0;c<y;c++)
         {
           b=strcmp(du[c].catagory,inp);
           if(b==0)
           break;
          }
          if(b==0)
            du[c].remove();
           break;
          }
         case 6:
        if(y<=0)
         {ob.error1();
          break;}
        else
        {
          for(z=g;z<x;z++)
          {
            f2=f2+du[z];
            g++;
          }
        for(i=0;i<y;i++)
        du[i].catago_amount();
        f2.total_amount();
        break;
        }
     }
     if(a==0)
     break;
       }
       break;
       case 3:
    for(i=0;;i++)
     {
       ob2.initial_task();
       cin>>a;
       switch(a)
       {
     case 1:
        if(z>0)
         {
           cout<<"YOU CAN NOT INSERT ITEM MORE THAN ONE TIMES"<<'\n'<<'\n';
           break;
          }
         else
         {
           cout<<"How many catagories do u want to insert=";
           cin>>n;
           for(i=0;i<n;i++)
            {
              ma[z].insert();
              ma[z].insert_ma();
               z++;
             }
          }
         break;
      case 2:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
           cout<<"How many catagories do u want to add=";
           cin>>n;
           for(j=0;j<n;j++)
            {
             ma[z].add();
             ma[z].insert_ma();
              z++;
             }
          break;
          }
       case 3:
        if(z<=0)
        {ob2.error1();
        break;}
         else
         {
          for(s=0;s<z;s++)
           {
             ma[s].display();
             ma[s].display_ma();
           }
           break;
         }
       case 4:
        if(z<=0)
        {ob2.error1();
        break;}
        if(z>0)
        {
         cout<<"Enter your Desired catagory=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(inp,ma[c].catagory);
           if(b==0)
           break;
          }
          if(b==0)
            {ma[c].search();
            ma[s].display_ma();}
           break;
          }
        case 5:
        if(z<=0)
        {ob2.error1();
          break;}
        else
        {
         cout<<"Enter ur Desired catagory=";
         cin>>inp;
         for(c=0;c<z;c++)
         {
           b=strcmp(ma[c].catagory,inp);
           if(b==0)
           break;
          }
          if(b==0)
            ma[c].remove();
           break;
          }
         case 6:
        if(z<=0)
         {ob2.error1();
          break;}
        else
        {
          for(q=g;q<z;q++)
          {
            f3=f3+ma[q];
            g++;
          }
        for(i=0;i<z;i++)
        ma[i].catago_amount();
        f3.total_amount();
        break;
        }
     }
    
	if(a==0)
     break;
       }
       break;
      }
      if(a1==0)
      break;
      }
       return 0;
     }
