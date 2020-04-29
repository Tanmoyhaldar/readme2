#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
/*************************************************************************************************************
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exponents
6. Trigonometry
7. Matrice
  a. Addition
  b. Subtraction
  c. Multiplication
8. Quadratic Equation
9. Square
  a. Side
  b. Area
  c. Perimeter
10. Rectangle
  a. Side
  b. Area
  c. Perimeter
11. Equiateral Triangle
  a. Side
  b. Area
  c. Perimeter
12. Isosceles Triangle
  a. Side
  b. Area
  c. Perimeter
13. Scalene Triangle
  a. Perimeter
  b. Area
14. Circle
  a. Radius
  b. Circumference
  c. Area
15. Complex Number
  a. Angle
  b. Addition
  c. Subtraction
  d. Multiplication
  e. Division
  f. Conjugate
16. Cube
  a. Area
  b. Side
  c. Volume
17. Cuboid
  a. Area
  b. Volume
18. Sphere
  a. Volume
  b. Area
19. Cone
  a. TSA
  b. CSA
  c. Volume
20. Cylinder
  a. CSA
  b. TSA
  c. Volume  
*************************************************************************************************************************/
int sum()                                         //addition
{
	int x,y,xy=0;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tADDITION";
	cout<<"\nEnter the first number : ";
	cin>>x;
	cout<<"\nEnter the second number : ";
	cin>>y;
	xy=x+y;
	cout<<"\t"<<x<<" + "<<y<<" = "<<xy;
	cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
}

int sub()                                        //subtraction
{
	int x,y,xy=0;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tSUBTRACTION";
	cout<<"\nEnter the first number : ";
	cin>>x;
	cout<<"\nEnter the second number : ";
	cin>>y;
	xy=x-y;
	cout<<"\t"<<x<<" - "<<y<<" = "<<xy;
	cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
}

int mult()                                       //multiplication
{
	int x,y,xy=1;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tMULTIPLICATION";
	cout<<"\nEnter the first number : ";
	cin>>x;
	cout<<"\nEnter the second number : ";
	cin>>y;
	xy=x*y;
	cout<<"\t"<<x<<" X "<<y<<" = "<<xy;
	cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
}

int div()                                      //division
{
	int x,y,xy1=1,xy2=1;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tDIVISION";
	cout<<"\nEnter the first number : ";
	cin>>x;
	cout<<"\nEnter the second number : ";
	cin>>y;
	if(y==0)
	 cout<<"\n Division value is undefined(infinity)";
	else
	{
	xy1=x/y;
	xy2=x%y;
	cout<<"\tDivision value\n\tQuotient = "<<xy1<<"\tRemainder = "<<xy2;
    }
	cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
}

int exp()                                        //finding exponential values
{
   float x,y,xy;
   cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
   cout<<"\n\t\t\t\t\t\tEXPONENTIAL VALUE CALCULATION";
   cout<<"\nEnter the number whose exponent to be calculated : ";
   cin>>x;
   cout<<"\nWhich power of the number to be calculated : ";
   cin>>y;
   xy=pow(x,y);	
   cout<<"\nValue = "<<xy;
   cout<<"\n_____________________________________________________________________________________________________________";
   return 0;
}

int trig()                                    //for getting values of trignometric functions
 {
 float n,num,deg,rad,degr,val;
 	cout<<"\n\t\tPress '1' for solving Normal Trignometric Functions\n\t\tPress '2' for solving Inverse Trignometric Functions\n\tChoice : ";
 	cin>>n;
 	if(n==1)
 	  {
 	  	    cout<<"\n\t\t\t\t\tNORMAL TRIGONOMETRIC FUNCTIONS\n";
		 	cout<<"\n\t\tPress '1' for working with RADIANS\t\tPress '2' for working with DEGREES\n\t\tChoice : ";
		 	cin>>num;
		 	if(num==1)
		 	{
		 	    cout<<"\nEnter the value of angle in radians : ";
		 	    cin>>rad;
		 	    cout<<"\n\tSin("<<rad<<") = "<<sin(rad)<<"\t\tCos("<<rad<<") = "<<cos(rad)<<"\t\tTan("<<rad<<") = "<<tan(rad);
		 	    cout<<"\n\tCosec("<<rad<<") = "<<1/sin(rad)<<"\t\tSec("<<rad<<") = "<<1/cos(rad)<<"\t\t\tCot("<<rad<<") = "<<1/tan(rad);
		    }
		 	else if(num==2)
		 	{
		 		cout<<"\n\t\t\t\t\tINVERSE TRIGONOMETRIC FUNCTIONS\n";
		 		cout<<"\n\tEnter the value of angle in degrees : ";
		 	    cin>>deg;
		 	    degr=(3.14*deg)/180;
		 	    cout<<"\n\tSin("<<deg<<") = "<<sin(degr)<<"\t\tCos("<<deg<<") = "<<cos(degr)<<"\t\tTan("<<deg<<") = "<<tan(degr);
		 	    cout<<"\n\tCosec("<<deg<<") = "<<1/sin(degr)<<"\t\tSec("<<deg<<") = "<<1/cos(degr)<<"\t\tCot("<<deg<<") = "<<1/tan(degr);
			 }
		 	else
		 	  cout<<"\n\t\t\t\t\t!Wrong Input";
      }
    else if(n==2)
            {	
		 	    cout<<"\nEnter the Value : ";
		 	    cin>>val;
		 	    if(val<=1 && val>=-1)
		 	      cout<<"\n\tSin^-1("<<val<<") = "<<asin(val)<<"\t\tCos^-1("<<val<<") = "<<acos(val)<<"\t\tTan^-1("<<val<<") = "<<atan(val);
		 	    else
		 	      cout<<"\n\tSin^-1("<<val<<") = Not Defined!"<<"\t\tCos^-1("<<val<<") = Not Defined!"<<"\t\tTan^-1("<<val<<") = "<<atan(val);
		    }
	else
	    cout<<"\n\t\t\t\t\t!!!!!Wrong Input!!!!!";
 	return 0;	
 }
 
 //MATRICE OPERATION FUNCTIONS
int mat_add()               //matrice addition
	     {
	     	int a[100][100],b[100][100],sum[100][100],m1,n1,m2,n2;
	     	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	        cout<<"\n\t\t\t\t\t\tMATRICE ADDITION";
		  	cout<<"\n\tMATRICE-1";
		  	cout<<"\nEnter number of rows : ";
		  	cin>>m1;
		  	cout<<"\nEnter number of colomns : ";
		  	cin>>n1;
		  	cout<<"\n\n\n\tMATRICE-2";
		  	cout<<"\nEnter number of rows : ";
		  	cin>>m2;
		  	cout<<"\nEnter number of colomns : ";
		  	cin>>n2;
		  	if(m1==m2 && n1==n2)    //checking the condition of no. of row and colomn elements.
		  	  {
		  	  	cout<<"\n\n\n\t\tMATRICE-1";
		  	  	cout<<"\nEnter the elements -\n";             
		  	  	for(int i=0;i<m1;i++)                          //loop for entering mat-1
		  	  	  {
		  	  	  	cout<<"\n";
		  	  	  	for(int j=0;j<n1;j++)
		  	  	  	   {
		  	  	  	   	cout<<"\ta["<<i<<"]["<<j<<"] --> ";
		  	  	  	   	cin>>a[i][j];
					   }
				  }
				cout<<"\n\n\n\t\tMATRICE-2";
				cout<<"\n\n\nEnter the elements -\n";
		  	  	for(int i=0;i<m2;i++)                       //loop for entering mat-2
		  	  	  {
		  	  	  	cout<<"\n";
		  	  	  	for(int j=0;j<n2;j++)
		  	  	  	   {
		  	  	  	   	cout<<"\ta["<<i<<"]["<<j<<"] --> ";
		  	  	  	   	cin>>b[i][j];
					   }
				  }
				cout<<"\n\nMATRICE-1 :\n";
				for(int i=0;i<m1;i++)                      //loop for printing mat-1
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<a[i][j]<<"\t";
					  }
				  }
				cout<<"\n\n\nMATRICE-2 :";
				for(int i=0;i<m1;i++)                   //loop for printing mat-2
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<b[i][j]<<"\t";
					  }
				  }
			    cout<<"\n\n\nSUM of the MATRICES = ";    //sum operation
			    for(int i=0;i<m1;i++)
			       {
			       	for(int j=0;j<n1;j++)
			       	  {
			       	  	sum[i][j]=a[i][j]+b[i][j];
					  }
				   }
				for(int i=0;i<m1;i++)                      //loop for printing sum-mat
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<sum[i][j]<<"\t";
					  }
				  }
			
		    	 }
			else
			   cout<<"\nFor ADDING two matrices the number of rows and number of colomns of 1st matrice must be equal with the 2nd matrice.";
			   cout<<"\n_____________________________________________________________________________________________________________";
			return 0;
}

int mat_sub()                //matrice subtraction
	     {
	     	int a[100][100],b[100][100],sub[100][100],m1,n1,m2,n2;
	     	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
          	cout<<"\n\t\t\t\t\tMATRICE SUBTRACTION";
		  	cout<<"\n\tMATRICE-1";
		  	cout<<"\nEnter number of rows : ";
		  	cin>>m1;
		  	cout<<"\nEnter number of colomns : ";
		  	cin>>n1;
		  	cout<<"\n\n\n\tMATRICE-2";
		  	cout<<"\nEnter number of rows : ";
		  	cin>>m2;
		  	cout<<"\nEnter number of colomns : ";
		  	cin>>n2;
		  	if(m1==m2 && n1==n2)    //checking the condition of no. of row and colomn elements.
		  	  {
		  	  	cout<<"\n\n\n\t\tMATRICE-1";
		  	  	cout<<"\nEnter the elements -\n";             
		  	  	for(int i=0;i<m1;i++)                          //loop for entering mat-1
		  	  	  {
		  	  	  	cout<<"\n";
		  	  	  	for(int j=0;j<n1;j++)
		  	  	  	   {
		  	  	  	   	cout<<"\ta["<<i<<"]["<<j<<"] --> ";
		  	  	  	   	cin>>a[i][j];
					   }
				  }
				cout<<"\n\n\n\t\tMATRICE-2";
				cout<<"\n\n\nEnter the elements -\n";
		  	  	for(int i=0;i<m2;i++)                       //loop for entering mat-2
		  	  	  {
		  	  	  	cout<<"\n";
		  	  	  	for(int j=0;j<n2;j++)
		  	  	  	   {
		  	  	  	   	cout<<"\ta["<<i<<"]["<<j<<"] --> ";
		  	  	  	   	cin>>b[i][j];
					   }
				  }
				cout<<"\n\nMATRICE-1 :\n";
				for(int i=0;i<m1;i++)                      //loop for printing mat-1
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<a[i][j]<<"\t";
					  }
				  }
				cout<<"\n\n\nMATRICE-2 :";
				for(int i=0;i<m1;i++)                   //loop for printing mat-2
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<b[i][j]<<"\t";
					  }
				  }
			    cout<<"\n\n\nDIFFERENCE of the MATRICES = ";    //subtraction operation
			    for(int i=0;i<m1;i++)
			       {
			       	for(int j=0;j<n1;j++)
			       	  {
			       	  	sub[i][j]=a[i][j]-b[i][j];
					  }
				   }
				for(int i=0;i<m1;i++)                      //loop for printing sub-mat
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<sub[i][j]<<"\t";
					  }
				  }
			
		    	 }
			else
			   cout<<"\nFor SUBTRACTING two matrices the number of rows and number of colomns of 1st matrice must be equal with the 2nd matrice.";
			   cout<<"\n_____________________________________________________________________________________________________________";
			return 0;
  }
  
int mat_mult()               //matrice multiplication
	    {
	    	int a[100][100],b[100][100],mult[100][100],m1,n1,m2,n2;
	    	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	        cout<<"\n\t\t\t\t\tMATRICE MULTIPLICATION";
		  	cout<<"\n\tMATRICE-1";
		  	cout<<"\nEnter number of rows : ";
		  	cin>>m1;
		  	cout<<"\nEnter number of colomns : ";
		  	cin>>n1;
		  	cout<<"\n\n\n\tMATRICE-2";
		  	cout<<"\nEnter number of rows : ";
		  	cin>>m2;
		  	cout<<"\nEnter number of colomns : ";
		  	cin>>n2;
		  	if(n1==m2)                     //checking the condition of no. of row and colomn elements.
		  	  {
		  	  	cout<<"\n\n\n\t\tMATRICE-1";
		  	  	cout<<"\nEnter the elements -\n";             
		  	  	for(int i=0;i<m1;i++)                          //loop for entering mat-1
		  	  	  {
		  	  	  	cout<<"\n";
		  	  	  	for(int j=0;j<n1;j++)
		  	  	  	   {
		  	  	  	   	cout<<"\ta["<<i<<"]["<<j<<"] --> ";
		  	  	  	   	cin>>a[i][j];
					   }
				  }
				cout<<"\n\n\n\t\tMATRICE-2";
				cout<<"\n\n\nEnter the elements -\n";
		  	  	for(int i=0;i<m2;i++)                       //loop for entering mat-2
		  	  	  {
		  	  	  	cout<<"\n";
		  	  	  	for(int j=0;j<n2;j++)
		  	  	  	   {
		  	  	  	   	cout<<"\ta["<<i<<"]["<<j<<"] --> ";
		  	  	  	   	cin>>b[i][j];
					   }
				  }
				cout<<"\n\nMATRICE-1 :\n";
				for(int i=0;i<m1;i++)                      //loop for printing mat-1
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<a[i][j]<<"\t";
					  }
				  }
				cout<<"\n\n\nMATRICE-2 :";
				for(int i=0;i<m1;i++)                   //loop for printing mat-2
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n1;j++)
				  	  {
				  	  	cout<<b[i][j]<<"\t";
					  }
				  }
			    cout<<"\n\n\nPRODUCT of the MATRICES = ";    //product operation
			    for(int i=0;i<m1;i++)
			       {
			       	for(int j=0;j<n2;j++)
			       	  {
			       	  	for(int k=0;k<n1;k++)
			       	  	  {
				       	  	mult[i][j]+=a[i][k]*b[k][j];
				          }
					  }
				   }
				for(int i=0;i<m1;i++)                      //loop for printing mult-mat
				  { 
				    cout<<"\n\t";
				  	for(int j=0;j<n2;j++)
				  	  {
				  	  	cout<<mult[i][j]<<"\t";
					  }
				  }
			
		    	 }
			else
			   cout<<"\n\tCan't Multiply. !!WRONG INPUT!!";
			   cout<<"\n_____________________________________________________________________________________________________________";
			return 0;
			  }
 	  	  
 int matrice()                                //matrice compiled function
 {
 	char ch;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tMATRICE OPERATION";
 	cout<<"\n\tPress '1' for ADDITION\n\tPress '2' for SUBTRACTION\n\tPress '3' for MULTIPLICATION";
 	cout<<"\n\nEnter your choice : ";
 	cin>>ch;
 	switch(ch)
 	  {
 	  	case '1': mat_add();
 	  	  break;
 	  	case '2': mat_sub();
 	  	  break;
 	  	case '3': mat_mult();
		    break;
 	  	default:
 	  		cout<<"\n\t\t!WRONG INPUT!";
	   }
	cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
 }
 
int quad()                                   //solving quadratic equation
  {
  	float a,b,c,d1,d2,r1,r2,r3;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tQUADRATIC EQUATION";
  	cout<<"\nEnter the coeffiecients of the QUADRATIC EUATION : ";
  	cout<<"\n\tFORMAT - ax^2 + bx + c = 0";
  	cout<<"\n\nEnter coefficient of x^2 : ";
  	cin>>a;
  	cout<<"\nEnter coefficient of x : ";
  	cin>>b;
  	cout<<"\nEnter the constant term : ";
  	cin>>c;
  	cout<<"\n\tEQUATION -->\t"<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0";
  	d1=pow(((b*b)-(4*a*c)),0.5);
  	d2=pow(-1*((b*b)-(4*a*c)),0.5);
  	r1=-b/(2*a);
  	r2=(-b+d1)/2*a;
  	r3=(-b-d1)/2*a;
  	 if(d1==0)
  	   {
  	   	cout<<"\nThe roots are equal.";
  	   	cout<<"Root-1 = "<<r1<<"\tRoot-2 = "<<r1;
		 }
	  else if(d1>0)
	    {
	    	cout<<"\nThe roots are different.";
	    	cout<<"\nRoot-1 = "<<r2<<"\tRoot-2 = "<<r3;
		}
	  else
	     {
	     	cout<<"\nThe roots are imaginary.";
	     	cout<<"\nRoot-1 = ("<<-1*b<<" + "<<d2<<" i"<<") / "<<2*a;
	     	cout<<"\nRoot-2 = ("<<-1*b<<" - "<<d2<<" i"<<") / "<<2*a;
		 }
	 cout<<"\n_____________________________________________________________________________________________________________";
  	return 0;
  }

//Functions of SQUARE
 int sq_side()                              //working operations in 2-D to find the side of square
  {
  	int ch,ch1;
  	float peri,ar,s;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tSIDES OF SQUARE";
  	cout<<"\n#note:- For calculating the dimensions of the side of a square you must have the value of either area or perimeter of the square";
  	cout<<"\n\n\n\tPress '1' ,if you have the value of PERIMETER.\n\tPress '2' ,if you have the value of AREA.";
  	cout<<"\n\nChoice : ";
  	cin>>ch;
  	 if(ch==1)
  	   {
  	   	cout<<"\nEnter the value of Perimeter : ";
  	   	cin>>peri;
  	   	s=peri/4;
  	   	cout<<"\nLength of each side of the SQUARE = "<<s<<" units";
	   }
	  else if(ch==2)
	   {
	   	cout<<"\nEnter the value of Area : ";
	   	cin>>ar;
	   	s=pow(ar,0.5);
	   	cout<<"\nLength of each side of the SQUARE = "<<s<<" units";
	   }
	  else
	    cout<<"\n\t\t!!!WRONG INPUT!!!";
	cout<<"\n_____________________________________________________________________________________________________________";
    return 0;	
  }
  
int sq_perimeter()                           //working operations in 2-D to find the perimeter of square
 {
 	int ch;
  	float peri,ar,s;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tPERIMETER OF SQUARE";
  	cout<<"\n#note:- For calculating the perimeter of a square you must have the value of either the area or the length of each side.";
  	cout<<"\n\tPress '1' ,if you have the value of AREA.\n\tPress '2' ,if you have the LENGTH of one side.";
  	cout<<"\nChoice : "<<ch;
  	if(ch==1)
  	  {
  	  	cout<<"\nEnter the value of Area : ";
  	  	cin>>ar;
  	  	peri=4*pow(ar,0.5);
  	  	cout<<"\nPerimeter of the SQUARE = "<<peri<<" units";
      }
    else if(ch==2)
      {
      	cout<<"\nEnter the length of one side : ";
      	cin>>s;
      	peri=4*s;
      	cout<<"\nPerimeter of the SQUARE = "<<peri<<" units";
	  }
	 else
	    cout<<"\n\t\t!!!WRONG INPUT!!!";
	cout<<"\n_____________________________________________________________________________________________________________";
    return 0;
 }
 
int sq_area()                                  //working operations in 2-D to find the area of square
{
   int ch;
   float peri,ar,s;	
   cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tAREA OF SQUARE";
   cout<<"\n#note:- For calculating area of a square you must either have the value of its perimeter or the length of one side.";
   cout<<"\n\tPress '1' ,if you have the value of PERIMETER\n\tPress '2' ,if you have the LENGTH of one side.";
   cout<<"\nChoice : ";
   cin>>ch;
   if(ch==1)
     {
     	cout<<"\nEnter the value of Perimeter : ";
     	cin>>peri;
     	ar=pow((peri/4),2);
     	cout<<"\nArea of the SQUARE = "<<ar<<" sq. units";
	 }
	else if(ch==2)
	  {
	  	cout<<"\nEnter the length of one side : ";
	  	cin>>s;
	  	ar=s*s;
	  	cout<<"\nArea of the SQUARE = "<<ar<<" sq. units";
	  }
	else
	    cout<<"\n\t\t!!!WRONG INPUT!!!";
  cout<<"\n_____________________________________________________________________________________________________________";
    return 0;
}

//Functions of RECTANGLE
int rect_side()                               //working operations in 2-D to find the side of rectangle
 {
 	int ch;
  	float peri,ar,s11,s12,s21,s22,s3,d,e;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tSIDES OF RECTANGLE";
  	cout<<"\n#note:- For calculating the lengths of the rectangle you must have the value of both area and perimeter of the rectangle";
  	cout<<"\n\n\n\tPress '1' ,if you have the value of PERIMETER and AREA both.\n\tPress '2' ,if you have the value of AREA and length of one side.";
  	cout<<"\n\tPress '3' ,if you have the value of PERIMETER and length of one side.";
  	cout<<"\n\nChoice : ";
  	cin>>ch;
  	if(ch==1)
  	  {
  	  	cout<<"\nEnter the value of PERIMETER :";
  	  	cin>>peri;
  	  	cout<<"\nEnter the value of AREA :";
  	  	cin>>ar;
  	  	d=1-((16*ar)/(peri*peri));
  	  	e=-1*d;
  	  	if(d==0)
  	  	  {
  	  	  	cout<<"\nThe resultant is a SQUARE.";
  	  	  	s3=(4*ar)/peri;
  	  	  	cout<<"\nSide-1 = "<<s3<<" units\tSide-2 = "<<s3<<" units\n";
		  }
		else if(d>0)
		  {
		  	cout<<"\nThere will be two set of lengths of the RECTANGLE(if it shows same value then ignore!)";
		  	s11=(4*ar)/(peri*(1+pow(d,0.5)));
		  	s12=(4*ar)/(peri*(1-pow(d,0.5)));
		  	s21=(peri*(1+pow(d,0.5)))/4;
		  	s22=(peri*(1-pow(d,0.5)))/4;
		  	cout<<"\nFirst set of values:\t\tSecond set of values:";
		  	cout<<"\nSide-1 = "<<s11<<" units\t\t\tSide-1 = "<<s12<<" units";
		  	cout<<"\nSide-2 = "<<s21<<" units\t\t\tSide-2 = "<<s22<<" units";
		  	cout<<"\n";
		  }
		else
		  {
		  	cout<<"\nThere will be two set of lengths of the RECTANGLE(if it shows same value then ignore!) and also COMPLEX ROOTS.";
		  	cout<<"\nFirst set of values:\t\tSecond set of values:";
		  	cout<<"\nSide-1 = ("<<4*ar*peri<<") - i("<<4*ar*peri*pow(e,0.5)<<") / ("<<(peri*peri)*(1-d)<<" units\t\tSide-1 = ("<<4*ar*peri<<") + i("<<4*ar*peri*pow(e,0.5)<<") / ("<<(peri*peri)*(1-d)<<") units";
		  	cout<<"\nSide-2 = ("<<peri/4<<") + (i"<<peri*pow(e,0.5)/4<<") units\t\tSide-2 = ("<<peri/4<<") - (i"<<peri*pow(e,0.5)/4<<") units";
		  	cout<<"\n";
		  }
      }
    else if(ch==2)
      {
      	cout<<"\nEnter the value of AREA : ";
      	cin>>ar;
      	cout<<"\nEnter the length of one side : ";
      	cin>>s11;
      	s21=ar/s11;
      	cout<<"\nSide-1 = "<<s11<<" units\tSide-2 = "<<s21<<" units";
      	cout<<"\n";
	  }
	else if(ch==3)
	  {
	  	cout<<"\nEnter the value of PERIMETER : ";
	  	cin>>peri;
	  	cout<<"\nEnter the length of one side : ";
      	cin>>s11;
      	s21=(peri/2)-s11;
      	cout<<"\nSide-1 = "<<s11<<" units\tSide-2 = "<<s21<<" units";
      	cout<<"\n";
	  }
	else
	   cout<<"\n\t\t!!!WRONG INPUT!!!";
  cout<<"\n_____________________________________________________________________________________________________________";
  return 0;
 }
 
int rect_area()                                 //working operations in 2-D to find the area of rectangle
{
  int ch;
  	float peri,ar,s1,s2;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tAREA OF RECTANGLE";
  	cout<<"\n#note:- For calculating the area of the rectangle you must have the value of perimeter of the rectangle and atleast one side of the rectangle.";
  	cout<<"\n\n\n\tPress '1' ,if you have the value of PERIMETER and one side\n\tPress '2' ,if you have the length of both the sides.";
  	cout<<"\n\nChoice : ";
  	cin>>ch;
	if(ch==1)
	  {
	  	cout<<"\nEnter the value of PERIMETER : ";
	  	cin>>peri;
	  	cout<<"\nEnter the length of one side : ";
	  	cin>>s1;
	  	s2=peri/2-s1;
	  	ar=s2*s1;
	  	cout<<"\nAREA = "<<ar<<" sq. units";
	  }	
	else if(ch==2)
	  {
	     cout<<"\nEnter the length of first side : ";
		 cin>>s1;
		 cout<<"\nEnter the length of second side : ";
		 cin>>s2;	
		 ar=s1*s2;
		 cout<<"\nAREA = "<<ar<<" sq. units";
	  }
	else
	   cout<<"\n\t\t!!!WRONG INPUT!!!";
  cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
}

int rect_perimeter()                             //working operations in 2-D to find the perimeter of rectangle
{
   int ch;
  	float peri,ar,s1,s2;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tPERIMETER OF RECTANGLE";
  	cout<<"\n#note:- For calculating the perimeter of the rectangle you must have the value of area of the rectangle and atleast one side of the rectangle or both the values of sides.";
  	cout<<"\n\n\n\tPress '1' ,if you have the value of AREA and one side\n\tPress '2' ,if you have the length of both the sides.\n\t Else press '3'";
  	cout<<"\n\nChoice : ";
  	cin>>ch;
	if(ch==1)
	  {
	  	cout<<"\nEnter the value of AREA : ";
	  	cin>>ar;
	  	cout<<"\nEnter the length of one side : ";
	  	cin>>s1;
	  	s2=ar/s1;
	  	peri=2*(s1+s2);
	  	cout<<"\nPERIMETER = "<<peri<<" units";
	  }
	else if(ch==2)
	  {
	 	cout<<"\nEnter the length of first side : ";
	  	cin>>s1;
	    cout<<"\nEnter the length of second side : ";
	  	cin>>s2;
	  	peri=2*(s1+s2);
	  	cout<<"\nPERIMETER = "<<peri<<" units";
	  }
	else
	   cout<<"\n\t\t!!!WRONG INPUT!!!";
   cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
}
 
 //Functions of EQUILATERAL TRIANGLE
int equi_side()                                 //calculating sides of equilateral triangle
  {
  	int ch1;
  	float s,ar,peri;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tEQUILATERAL TRIANGLE - SIDES";
  	cout<<"\n#note:- For calculating the length of the sides we must know either the value of Area or Perimeter.";
  	cout<<"\n\n\tPress '1', if you know the value of AREA\n\tPress '2', if you know the value of PERIMETER";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch1;
  	if(ch1==1)
  	 {
  	   cout<<"\n\nEnter the value of Area : ";
  	   cin>>ar;
  	   s=pow(((4*ar)/1.7302),0.5);
	   cout<<"\n\nSide-1 = "<<s<<" units\tSide-2 = "<<s<<" units\tSide-3 = "<<s<<" units";	
	 }
	else if(ch1==2)
	 {
	    cout<<"\n\nEnter the value of Perimeter : ";
  	    cin>>peri;	
	 	s=peri/3;
	 	cout<<"\n\nSide-1 = "<<s<<" units\tSide-2 = "<<s<<" units\tSide-3 = "<<s<<" units";	
	 }
	else
    cout<<"\n\t\t!!!WRONG INPUT!!!";
    cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
  }
  
int equi_perimeter()                          //calculating the perimeter of equilateral triangle
 {
 	int ch1;
  	float s,ar,peri;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tEQUILATERAL TRIANGLE - PERIMETER";
  	cout<<"\n#note:- For calculating the perimeter of the equilateral triangle we must know either the value of Area or length of one side.";
  	cout<<"\n\n\tPress '1', if you know the value of AREA\n\tPress '2', if you know the length of one SIDE";
  	cout<<"\nEnter your choice : ";
  	cin>>ch1;
  	if(ch1==1)
  	 {
  	   cout<<"\n\nEnter the value of Area : ";
  	   cin>>ar;
  	   s=pow(((4*ar)/1.7302),0.5);
	   peri=3*s;
	   cout<<"\nPERIMETER = "<<peri<<" units";	 	
	 }
	else if(ch1==2)
	 {
	    cout<<"\n\nEnter the length of one side : ";
  	    cin>>s;	
	 	peri=3*s;
	 	cout<<"\nPERIMETER = "<<peri<<" units";	
	 }
	else
    cout<<"\n\t\t!!!WRONG INPUT!!!";
    cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
 }

int equi_area()                                  //calculating the area of equilateral triangle          
 {
 	int ch1;
  	float s,ar,peri;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tEQUILATERAL TRIANGLE - AREA";
  	cout<<"\n#note:- For calculating the area of the equilateral triangle we must know either the value of perimater or length of one side.";
  	cout<<"\n\n\tPress '1', if you know the value of PERIMETER\n\tPress '2', if you know the length of one SIDE";
  	cout<<"\nEnter your choice : ";
  	cin>>ch1;
  	if(ch1==1)
  	 {
  	   cout<<"\n\nEnter the value of Perimeter : ";
  	   cin>>peri;
  	   s=peri/3;
	   ar=1.7302*s*s/4;
	   cout<<"\nAREA = "<<peri<<" sq. units";	 	
	 }
	else if(ch1==2)
	 {
	    cout<<"\n\nEnter the length of one side : ";
  	    cin>>s;	
	 	ar=1.7302*s*s/4;
	 	cout<<"\nAREA = "<<peri<<" sq. units";	
	 }
	else
    cout<<"\n\t\t!!!WRONG INPUT!!!";
    cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
 }

//Functions of ISOSCELES TRIANGLE
int isos_side()                                //calculating the sides of isosceles triangle
  {
  	int ch1;
  	float r,t,ar,peri;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tISOSCELES TRIANGLE - SIDES";
	cout<<"\n\n\tPress '1', if you know the value of PERIMETER and one EQUAL SIDE\n\tPress '2', if you know the value of PERIMETER and one UNEQUAL SIDE";
	cout<<"\n\n\tPress '3', if you know the value of AREA and one UNEQUAL SIDE";
  	cout<<"\nEnter your choice : ";
  	cin>>ch1;
  	if (ch1==1)
  	  {
  	  	cout<<"\n\nEnter the value of Perimeter : ";
  	  	cin>>peri;
  	  	cout<<"\nEnter the length of one Equal Side : ";
  	  	cin>>r;
  	  	t=peri-(2*r);
  	  	cout<<"\n\nSide-1 = "<<r<<" units\tSide-2 = "<<r<<" units\tSide-3 = "<<t<<" units";	
	  }
	else if(ch1==2)
	  {
	  	cout<<"\n\nEnter the value of Perimeter : ";
  	  	cin>>peri;
  	  	cout<<"\nEnter the length of one Unequal Side : ";
  	  	cin>>t;
  	  	r=(peri-t)/2;
  	  	cout<<"\n\nSide-1 = "<<r<<" units\tSide-2 = "<<r<<" units\tSide-3 = "<<t<<" units";	
	  }
	else if(ch1==3)
	  {
	  	cout<<"\n\nEnter the value of Area : ";
  	  	cin>>ar;
  	  	cout<<"\nEnter the length of one Unequal Side : ";
  	  	cin>>t;
  	  	r=pow((((4*ar)/(t*t))+(t*t)),0.5);
  	  	cout<<"\n\nSide-1 = "<<r<<" units\tSide-2 = "<<r<<" units\tSide-3 = "<<t<<" units";	
	  }
	else
    cout<<"\n\t\t!!!WRONG INPUT!!!";  
  	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
  }
  
int isos_perimeter()                           //calculating the perimeter of isosceles triangle
 {
   	int ch1;
  	float r,t,ar,peri;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tISOSCELES TRIANGLE - PERIMETER";
	cout<<"\n\n\tPress '1', if you know the value of AREA and one UNEQUAL SIDE\n\tPress '2', if you know the length of both EQUAL and UNEQUAL SIDE";
  	cout<<"\nEnter your choice : ";
  	cin>>ch1;
  	if (ch1==1)
  	  {
  	  	cout<<"\n\nEnter the value of Area : ";
  	  	cin>>ar;
  	  	cout<<"\nEnter the length of one Unequal Side : ";
  	  	cin>>t;
  	  	r=pow((((4*ar)/(t*t))+(t*t)),0.5);
  	  	peri=(2*r)+t;
  	  	cout<<"\nPERIMETER = "<<peri<<" units";	
	  }
	else if(ch1==2)
	  {
	  	cout<<"\n\nEnter the length of Equal Side : ";
  	  	cin>>r;
  	  	cout<<"\nEnter the length of Unequal Side : ";
  	  	cin>>t;
  	  	peri=(2*r)+t;
  	  	cout<<"\nPERIMETER = "<<peri<<" units";	
	  }
	else
    cout<<"\n\t\t!!!WRONG INPUT!!!";  
  	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
 }

int isos_area()                                 //calculating the area of isosceles triangle
 {
 	int ch1;
  	float r,t,ar,peri;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tISOSCELES TRIANGLE - AREA";
	cout<<"\n\n\tPress '1', if you know the value of PERIMETER and one UNEQUAL SIDE\n\tPress '2', if you know the value of PERIMETER and one EQUAL SIDE";
	cout<<"\n\tPress '3',if you know the length of both EQUAL and UNEQUAL SIDE";
  	cout<<"\nEnter your choice : ";
  	cin>>ch1;
  	if (ch1==1)
  	  {
  	  	cout<<"\n\nEnter the value of Perimeter : ";
  	  	cin>>peri;
  	  	cout<<"\nEnter the length of one Unequal Side : ";
  	  	cin>>t;
  	  	r=(peri-t)/2;
  	  	ar=t*pow(((4*r*r)-(t*t)),0.5)/4;
  	  	cout<<"\nAREA = "<<ar<<" sq. units";	
	  }
	if (ch1==2)
  	  {
  	  	cout<<"\n\nEnter the value of Perimeter : ";
  	  	cin>>peri;
  	  	cout<<"\nEnter the length of one Equal Side : ";
  	  	cin>>r;
  	  	t=peri-(2*r);
  	  	ar=t*pow(((4*r*r)-(t*t)),0.5)/4;
  	  	cout<<"\nAREA = "<<ar<<" sq. units";	
	  }
	else if(ch1==3)
	  {
	  	cout<<"\n\nEnter the length of Equal Side : ";
  	  	cin>>r;
  	  	cout<<"\nEnter the length of Unequal Side : ";
  	  	cin>>t;
  	  	ar=t*pow(((4*r*r)-(t*t)),0.5)/4;
  	  	cout<<"\nAREA = "<<ar<<" sq. units";
	  }
	else
    cout<<"\n\t\t!!!WRONG INPUT!!!";  
 	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
 }
 
 //Functions of SCALENE TRIANGLE
int scal_perimeter()                          //calculating the perimeter of scalene triangle
  {
  	float a,b,c,peri;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tSCALENE TRIANGLE - PERIMETER";
	cout<<"\n\nEnter the length of first side : ";
	cin>>a;
	cout<<"\nEnter the length of second side : ";
	cin>>b;
	cout<<"\nEnter the length of third side : ";
	cin>>c;
	peri=a+b+c;
	cout<<"\nPERIMETER = "<<peri<<" units";
   cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
  }
  
int scal_area()                                //calculating the area of scalene triangle
 {  
    float a,b,c,ar,s;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tSCALENE TRIANGLE - AREA";
	cout<<"\n\nEnter the length of first side : ";
	cin>>a;
	cout<<"\nEnter the length of second side : ";
	cin>>b;
	cout<<"\nEnter the length of third side : ";
	cin>>c;
	ar=pow(s*(s-a)*(s-b)*(s-c),0.5);
	cout<<"\nAREA = "<<ar<<" sq. units";
 	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
 }
 
 //Function of TRIANGLES
int equilateral()                            //working with equilateral triangle
{
   int ch;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tEQUILATERAL TRIANGLE";
  	cout<<"\n\t\t\t\tSELECT THE PARAMETER YOU WANT TO CALCULATE.";
  	cout<<"\n\n\tPress '1' for finding the length of each SIDE.\n\tPress '2' for finding the PERIMETER.\n\tPress '3' for finding the AREA.";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch;
  	 switch(ch)
  	  {
  	    case 1: equi_side();
		  break;
	    case 2: equi_perimeter();
		  break;
	    case 3: equi_area();
		  break;
		default:
		  cout<<"\n\t\t\t!!!WRONG INPUT!!!";	
	  }
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
}

int isosceles()                              //working with isosceles triangle
{
   int ch;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tISOSCELES TRIANGLE";
  	cout<<"\n\t\t\t\tSELECT THE PARAMETER YOU WANT TO CALCULATE.";
  	cout<<"\n\n\tPress '1' for finding the length of each SIDE.\n\tPress '2' for finding the PERIMETER.\n\tPress '3' for finding the AREA.";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch;
  	 switch(ch)
  	  {
  	    case 1: isos_side();
		  break;
	    case 2: isos_perimeter();
		  break;
	    case 3: isos_area();
		  break;
		default:
		  cout<<"\n\t\t\t!!WRONG INPUT!!!";	
	  }
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
}

int scalene()                                //working with scalene triangle
{
	int ch;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tSCALENE TRIANGLE";
  	cout<<"\n\t\t\t\tSELECT THE PARAMETER YOU WANT TO CALCULATE.";
  	cout<<"\n\n\tPress '1' for finding the PERIMETER.\n\tPress '2' for finding the AREA.";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch;
  	 switch(ch)
  	  {
	    case 1: scal_perimeter();
		  break;
	    case 2: scal_area();
		  break;
		default:
		  cout<<"\n\t\t\t!!WRONG INPUT";	
	  }
	 cout<<"\n_____________________________________________________________________________________________________________";
	 return 0;
}

//Functions of CIRCLE
int cir_rad()                               //function for calculating the length of radius of circle
 {
    int ch;
    float peri,ar,r;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCIRCLE - RADIUS/DIAMETER";
	cout<<"\n#note:- For getting the radius/diameter you must have either area or circumference value of the circle.";
	cout<<"\n\nPress '1' if you have the value of AREA\nPress '2' if you have the value of PERIMETER";
	cout<<"\nEnter your choice : ";
	cin>>ch;
	if(ch==1)
	  {
	  	cout<<"\nEnter the value of Area : ";
	  	cin>>ar;
	  	r=pow(ar/3.143,0.5);
	  	cout<<"\nRadius = "<<r<<" units\t\tDiameter = "<<2*r<<" units";
	  }
	else if(ch==2)
	  {
	  	cout<<"\nEnter the value of Perimeter : ";
	  	cin>>peri;
	  	r=peri/(2*3.143);
	  	cout<<"\n\nRadius = "<<r<<" units\t\tDiameter = "<<2*r<<" units";
	  }	
	 else
	  cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }
 
int cir_circumference()                           //function for calculating circumference of circle
 {
 	int ch;
    float peri,ar,r,d;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCIRCLE - CIRCUMFERENCE";
	cout<<"\n#note:- For getting the circumference you must have either area or value of radius/diameter of the circle.";
	cout<<"\n\nPress '1' if you have the value of AREA\nPress '2' if you have the value of RADIUS\nPress '3' if you have the value of DIAMETER";
	cout<<"\nEnter your choice : ";
 	cin>>ch;
	if(ch==1)
	  {
	  	cout<<"\n\nEnter the value of Area : ";
	  	cin>>ar;
	  	peri=2*pow(ar*3.143,0.5);
	  	cout<<"\nCIRCUMFERENCE = "<<peri<<" units";
	  }
	if(ch==2)
	  {
	  	cout<<"\n\nEnter the length of Radius : ";
	  	cin>>r;
	  	peri=2*3.143*r;
	  	cout<<"\nCIRCUMFERENCE = "<<peri<<" units";
	  }
	if(ch==3)
	  {
	  	cout<<"\n\nEnter the length of Diameter : ";
	  	cin>>d;
	  	peri=3.143*d;
	  	cout<<"\nCIRCUMFERENCE = "<<peri<<" units";
	  }
	else
	  cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;  
 }
 
int cir_area()                             //function for calculating area of circle
 {
 	int ch;
    float peri,ar,r,d;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCIRCLE - AREA";
 	cout<<"\n\nPress '1' if you have the value of CIRCUMFERENCE\nPress '2' if you have the value of RADIUS\nPress '3' if you have the value of DIAMETER";
 	cout<<"\nEnter your choice : ";
 	cin>>ch;
	if(ch==1)
	  {
	  	cout<<"\n\nEnter the value of Perimeter : ";
	  	cin>>peri;
	  	ar=(peri*peri)/(4*3.143);
	  	cout<<"\nAREA = "<<peri<<" sq. units";
	  }
	if(ch==2)
	  {
	  	cout<<"\n\nEnter the length of Radius : ";
	  	cin>>r;
	  	ar=3.14*r*r;
	  	cout<<"\nAREA = "<<peri<<" sq. units";
	  }
	if(ch==3)
	  {
	  	cout<<"\n\nEnter the length of Diameter : ";
	  	cin>>d;
	  	peri=3.143*d*d/4;
	  	cout<<"\nAREA = "<<peri<<" sq. units";
	  }
	else
	  cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	   cout<<"\n_____________________________________________________________________________________________________________";
	return 0;  
 }

//Functions for COMPLEX NUMBERS
int comp_ang(float v,float w)                  //function for converting geometric form of COMPLEX numbers to the Polar form
{
 	float cv,cvr,r;
 	r=pow((v*v)+(w*w),0.5);
 	if(v>0 && w>0)
 	 {
 	 	cv=tanh(w/v);
        cvr=(cv*180)/3.143;
        cout<<"\n#note:- format of result 'modulus |angle|'; angle will be in degrees";
 	 	cout<<"\nPolar form of the result with principal angle:";
 	 	cout<<"\n"<<r<<" |"<<cvr<<"|";
	 }
	else if((v>0 && w<0) || (v<0 && w>0))
	 {
	   	cv=tanh(-1*w/v);
        cvr=(cv*180)/3.143;
        cout<<"\n#note:- format of result 'modulus |angle|'; angle will be in degrees";
 	 	cout<<"\n\nPolar form of the result with principal angle:";
 	 	cout<<"\n\t\t"<<r<<" |"<<cvr<<"|";	
	 }
 	else if((w==0) || (v==0 && w==0))
	 {
 	 	cout<<"\nNot Defined!!";
	 }
   return 0;	
}

int comp_add()                                //function for ADDITION of COMPLEX NUMBERS
{
    float x1,y1,x2,y2,sum1,sum2;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCOMPLEX NUMBER - ADDITION";
	cout<<"\n#note:- format- (a)+i(b);where a is real part and b is imaginary part";
	cout<<"\nEnter the first complex number :\n";
	cout<<"\n\tReal Part - 1      : ";
	cin>>x1;
	cout<<"\tImaginary Part - 1 : ";
	cin>>y1;
	cout<<"\nEnter the second complex number :";
	cout<<"\n\tReal Part - 2      : ";
	cin>>x2;
	cout<<"\tImaginary Part - 2 : ";
	cin>>y2;
	sum1=x1+x2;
	sum2=y1+y2;
	cout<<"\n\t[ ("<<x1<<") + i("<<y1<<") ] + [ ("<<x2<<") + i("<<y2<<") ] =  [ ("<<sum1<<") + i("<<sum2<<")";
	comp_ang(sum1,sum2);
	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
}

int comp_sub()                                 //function for SUBTRACTION of COMPLEX NUMBERS
{
   float x1,y1,x2,y2,dif1,dif2;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCOMPLEX NUMBER - SUBTRACTION";
	cout<<"\n#note:- format- (a)+i(b);where a is real part and b is imaginary part";
	cout<<"\nEnter the first complex number :\n";
	cout<<"\n\tReal Part - 1      : ";
	cin>>x1;
	cout<<"\tImaginary Part - 1 : ";
	cin>>y1;
	cout<<"\nEnter the second complex number :";
	cout<<"\n\tReal Part - 2      : ";
	cin>>x2;
	cout<<"\tImaginary Part - 2 : ";
	cin>>y2;
	dif1=x1-x2;
	dif2=y1-y2;
	cout<<"\n\t[ ("<<x1<<") + i("<<y1<<") ] - [ ("<<x2<<") + i("<<y2<<") ] =  [ ("<<dif1<<") + i("<<dif2<<")";
	comp_ang(dif1,dif2);
	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;	
}

int comp_mult()                                //function for MULTIPLICATION of COMPLEX NUMBERS
{
	float x1,y1,x2,y2,prod1,prod2;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCOMPLEX NUMBER - MULTIPLICATION";
	cout<<"\n#note:- format- (a)+i(b);where a is real part and b is imaginary part";
	cout<<"\nEnter the first complex number :\n";
	cout<<"\n\tReal Part - 1      : ";
	cin>>x1;
	cout<<"\tImaginary Part - 1 : ";
	cin>>y1;
	cout<<"\nEnter the second complex number :";
	cout<<"\n\tReal Part - 2      : ";
	cin>>x2;
	cout<<"\tImaginary Part - 2 : ";
	cin>>y2;
	prod1=((x1*x2)-(y1*y2));
	prod2=((x1*y2)+(x2*y1));
	cout<<"\n\t[ ("<<x1<<") + i("<<y1<<") ] X [ ("<<x2<<") + i("<<y2<<") ] =  [ ("<<prod1<<") + i("<<prod2<<")";
	comp_ang(prod1,prod2);
	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
}

int comp_div()                                 //function for DIVISION of COMPLEX NUMBERS
{
	float x1,y1,x2,y2,div1,div2;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCOMPLEX NUMBER - DIVISION";
	cout<<"\n#note:- format- (a)+i(b);where a is real part and b is imaginary part";
	cout<<"\nEnter the first complex number :\n";
	cout<<"\n\tReal Part - 1      : ";
	cin>>x1;
	cout<<"\tImaginary Part - 1 : ";
	cin>>y1;
	cout<<"\nEnter the second complex number :";
	cout<<"\n\tReal Part - 2      : ";
	cin>>x2;
	cout<<"\tImaginary Part - 2 : ";
	cin>>y2;
	div1=((x1*x2)+(y1*y2))/((x2*x2)-(y2*y2));
	div2=((x2*y1)-(x1*y2))/((x2*x2)-(y2*y2));
	cout<<"\n\t[ ("<<x1<<") + i("<<y1<<") ] / [ ("<<x2<<") + i("<<y2<<") ] =  [ ("<<div1<<") + i("<<div2<<")";
	comp_ang(div1,div2);
	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
}

int comp_conj()                               //function for calculating conjugate of COMPLEX NUMBERS
{
   float x1,y1;	
   cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCOMPLEX NUMBER - CONJUGATE";
	cout<<"\n#note:- format- (a)+i(b);where a is real part and b is imaginary part";
	cout<<"\nEnter the complex number :\n";
	cout<<"\n\tReal Part       : ";
	cin>>x1;
	cout<<"\tImaginary Part  : ";
	cin>>y1;
	cout<<"\nConjugate of [ ("<<x1<<")+ i("<<y1<<") ]is [ ("<<x1<<") - i("<<y1<<") ]";
	comp_ang(x1,y1);
	return 0;
}

int square()                                   //working operations of 2-D in Square
  {
  	int ch;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tSQUARE";
  	cout<<"\n\t\t\t\tSELECT THE PARAMETER YOU WANT TO CALCULATE.";
  	cout<<"\n\n\tPress '1' for finding the length of each SIDE.\n\tPress '2' for finding the PERIMETER.\n\tPress '3' for finding the AREA.";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch;
  	 switch(ch)
  	  {
  	    case 1: sq_side();
		  break;
	    case 2: sq_perimeter();
		  break;
	    case 3: sq_area();
		  break;
		default:
		  cout<<"\n\t\t\t!!WRONG INPUT";	
	  }
	cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
  }

int rectangle()                                //working operations of 2-D in Rectangle
  {
  	int ch;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tRECTANGLE";
  	cout<<"\n\t\t\t\tSELECT THE PARAMETER YOU WANT TO CALCULATE.";
  	cout<<"\n\n\tPress '1' for finding the length of each SIDE.\n\tPress '2' for finding the PERIMETER.\n\tPress '3' for finding the AREA.";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch;
  	 switch(ch)
  	  {
  	    case 1: rect_side();
		  break;
	    case 2: rect_perimeter();
		  break;
	    case 3: rect_area();
		  break;
		default:
		  cout<<"\n\t\t\t!!WRONG INPUT";	
	  }
	cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
  }
  
int triangle()                                 //working operations of 2-D in Triangle
 {
 	int ch;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tTRIANGLE";
 	cout<<"\n\nSelect the type of Triangle : ";
 	cout<<"\n\nPress '1' for EQUILATERAL triangle(all the sides are equal)";
 	cout<<"\nPress '2' for ISOSCELES triangle(two sides are equal)";
 	cout<<"\nPress '3' for SCALENE triangle(all the sides are unequal)";
 	cout<<"\n\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	  equilateral();
 	else if(ch==2)
 	  isosceles();
 	else if(ch==3)
 	  scalene();
 	else
	   cout<<"\n\t\t!!!WRONG INPUT!!!";
	cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
 }
   
int circle()                                   //function for working with CIRCLE
  {
  	int ch;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tCIRCLE";
  	cout<<"\n\n\t\t\t\tSELECT THE PARAMETER YOU WANT TO CALCULATE.";
  	cout<<"\n\n\tPress '1' for finding the radius/diameter of the Circle.\n\tPress '2' for finding the Circumference.\n\tPress '3' for finding the AREA.";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch;
  	 switch(ch)
  	  {
  	    case 1: cir_rad();
		  break;
	    case 2: cir_circumference();
		  break;
	    case 3: cir_area();
		  break;
		default:
		  cout<<"\n\t\t\t!!WRONG INPUT";	
	  }
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
  }
  
int DD()                                  //2-D Operations
 {
    int ch;
    cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t2-DIMENSIONAL SHAPES";
	cout<<"\nSelect a structure :";
	cout<<"\n\n\tPress '1' for SQUARE\t\tPress '2' for RECTANGLE\n\tPress '3' for TRIANGLE\t\tPress '4' for CIRCLE";
	cout<<"\nChoice : ";
	cin>>ch;
	if(ch==1)
	  square();
	 else if(ch==2)
	   rectangle();
	 else if(ch==3)
	   triangle();
	 else if(ch==4)
	   circle();
	 else
	   cout<<"\n\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";	
	return 0;
 }

int complex()                            //function for working with COMPLEX NNUMBERS
{
	int ch;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t    COMPLEX NUMBER";
	cout<<"\nPress '1' for ADDITION\t\t\t\tPress '2' for SUBTRACTION\nPress '3' for MULTIPLICATION\t\t\tPress '4' for DIVISION";
	cout<<"\nPress '5' for getting CONJUGATE";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	  {
	  	case 1: comp_add();
	  		break;
	  	case 2: comp_sub();
	  		break;
	  	case 3: comp_mult();
	  		break;
	  	case 4: comp_div();
	  		break;
	  	case 5: comp_conj();
	  	    break;
	  	default:
	  		 cout<<"\n\t\t!!!WRONG INPUT!!!";
	  }
	return 0;
}

int cube_area()                    //function for finding the area of cube
 {
 	int ch;
 	float csa,tsa,a,vol;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCUBE - AREA";
 	cout<<"\n#note:-For calculating the area you must have the value of volume or length of one side";
 	cout<<"\n\n\tPress '1', if you have the value of VOLUME\n\tPress '2', if you have the value of one SIDE";
 	cout<<"\n\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	 {
 	    cout<<"\nEnter the VOLUME : ";
		cin>>vol;
		a=pow(vol,0.33);
		csa=4*a*a;
		tsa=6*a*a;
		cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units\t\t"<<"CURVED SURFACE AREA = "<<csa<<" sq. units";	
	 }
	else if(ch==2)
	 {
	   cout<<"\nEnter the value of ONE SIDE : ";
	   cin>>a;
	   csa=4*a*a;
	   tsa=6*a*a;
       cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units\t\t"<<"CURVED SURFACE AREA = "<<csa<<" sq. units"; 	
	 }
	else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }

int cube_volume()                 //function for finding the volume of cube
 {
 	int ch;
 	float csa,tsa,a,vol;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCUBE - VOLUME";
 	cout<<"\n#note:-For calculating the VOLUME you must have the value of Area or length of one side";
 	cout<<"\n\n\tPress '1', if you have the value of CURVED SURFACE AREA\n\tPress '2', if you have the value of TOTAL SURFACE AREA\n\tPress '3', if you have the value of one SIDE";
 	cout<<"\n\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	 {
 	    cout<<"\nEnter the CURVED SURFACE AREA : ";
		cin>>csa;
		a=pow((csa/4),0.5);
		vol=pow(a,3);
		cout<<"\nVOLUME = "<<vol<<" cubic units";	
	 }
	if(ch==2)
 	 {
 	    cout<<"\nEnter the TOTAL SURFACE AREA : ";
		cin>>tsa;
		a=pow((tsa/6),0.5);
		vol=pow(a,3);
		cout<<"\nVOLUME = "<<vol<<" cubic units";	
	 }
	
	else if(ch==3)
	 {
	   cout<<"\nEnter the value of ONE SIDE : ";
	   cin>>a;
	   vol=pow(a,3);
       cout<<"\nVOLUME = "<<vol<<" cubic units";
	 }
	else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }

int cube_side()                   //function for getting the values of sides of the cube
 {
 	int ch;
 	float csa,tsa,a,vol;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCUBE - SIDE";
 	cout<<"\n#note:-For calculating the Side you must have either the value of area or volume";
 	cout<<"\n\n\tPress '1', if you have the value of CURVED SURFACE AREA\n\tPress '2', if you have the value of TOTAL SURFACE AREA\n\tPress '3', if you have the VOLUME";
 	cout<<"\n\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	 {
 	   cout<<"\nEnter the CURVED SURFACE AREA : ";
	   cin>>csa;
	   a=pow((csa/4),0.5);
	   cout<<"\nLength of SIDE = "<<a;	
	 }
	else if(ch==2)
	 {
	   cout<<"\nEnter the TOTAL SURFACE AREA : ";
	   cin>>tsa;
	   a=pow((tsa/6),0.5);
	   cout<<"\nLength of SIDE = "<<a;
	 }
	else if(ch==3)
	 {
	   cout<<"\nEnter the VOLUME : ";
	   cin>>vol;
	   a=pow(vol,0.33);
	   cout<<"\nLength of SIDE = "<<a;	
	 }
	else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;
 }
 
 int cub_area()                    //function for finding the area of cuboid
 {
 	int ch;
 	float csa,tsa,s1,s2,s3,vol;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCUBOID - AREA";
 	cout<<"\n#note:-For calculating the area you must have the value of volume and length of two sides or all the three sides";
 	cout<<"\n\nPress '1', if you have the value of VOLUME and length of two sides\n\tPress '2', if you have the value of all the three SIDES";
 	cout<<"\n\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	 {
 	    cout<<"\nEnter the VOLUME : ";
		cin>>vol;
		cout<<"\nEnter the length of first side : ";
		cin>>s1;
		cout<<"\nEnter the length of second side : ";
		cin>>s2;
		s3=vol/(s1*s2);
		tsa=2*((s1*s2)+(s2*s3)+(s3*s1));
		csa=2*s3*(s1+s2);
		cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units\t\t"<<"CURVED SURFACE AREA = "<<csa<<" sq. units";	
	 }
	else if(ch==2)
	 {
	   cout<<"\nEnter the length of first side : ";
	   cin>>s1;
	   cout<<"\nEnter the length of second side : ";
	   cin>>s2;
	   cout<<"\nEnter the length of third side : ";
	   cin>>s3;
	   tsa=2*((s1*s2)+(s2*s3)+(s3*s1));
   	   csa=2*s3*(s1+s2);
       cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units\t\t"<<"CURVED SURFACE AREA = "<<csa<<" sq. units"; 	
	 }
	else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }

int cub_volume()                 //function for finding the volume of cuboid
 {
 	int ch;
 	float csa,tsa,s1,s2,s3,vol;
 	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCUBOID - VOLUME";
 	cout<<"\n#note:-For calculating the volume you must have the value of area and length of two sides or all the three sides";
 	cout<<"\n\nPress '1', if you have the value of CURVED SURFACE AREA and length of two sides\n\tPress '2', if you have the value of TOTAL SURFACE AREA and length of two sides";
 	cout<<"\nPress '3',if you have the value of all the three SIDES";
 	cout<<"\n\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	 {
 	    cout<<"\nEnter the  CURVED SURFACE AREA : ";
		cin>>csa;
		cout<<"\nEnter the length of first side : ";
		cin>>s1;
		cout<<"\nEnter the length of second side : ";
		cin>>s2;
		s3=csa/(2*(s1+s2));
		vol=s1*s2*s3;
		cout<<"\n\tVOLUME = "<<vol<<" cubic units";	
	 }
	if(ch==2)
 	 {
 	    cout<<"\nEnter the  TOTAL SURFACE AREA : ";
		cin>>tsa;
		cout<<"\nEnter the length of first side : ";
		cin>>s1;
		cout<<"\nEnter the length of second side : ";
		cin>>s2;
		s3=(tsa-(2*s1*s2))/(2*(s1+s2));
		vol=s1*s2*s3;
		cout<<"\n\tVOLUME = "<<vol<<" cubic units";		
	 }
	else if(ch==3)
	 {
	   cout<<"\nEnter the length of first side : ";
	   cin>>s1;
	   cout<<"\nEnter the length of second side : ";
	   cin>>s2;
	   cout<<"\nEnter the length of third side : ";
	   cin>>s3;
	   vol=s1*s2*s3;
       cout<<"\n\tVOLUME = "<<vol<<" cubic units";		
	 }
	else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }
 
 int sph_area()                  //function for finding the area of sphere
  {
  	int ch;
  	float ar,r,vol,d;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tSPHERE - AREA";
 	cout<<"\n#note:-For calculating the area you must have the value of volume or length of the radius or diameter.";
 	cout<<"\n\n\tPress '1', if you have the VOLUME\n\tPress '2', if you have the RADIUS\n\tPress '3', if you have the DIAMETER";
 	cout<<"\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	  {
 	  	cout<<"\n\nEnter the VOLUME : ";
 	  	cin>>vol;
 	  	r=pow(((vol*3)/(4*3.14)),0.33);
 	  	ar= 4*3.14*r*r;
 	  	cout<<"\n\tRadius = "<<r;
 	  	cout<<"\nAREA = "<<ar;
	   }
	else if(ch==2)
 	  {
 	  	cout<<"\n\nEnter the RADIUS : ";
 	  	cin>>r;
 	  	ar=4*3.14*r*r;
 	  	cout<<"\nAREA = "<<ar;
	   }
	else if(ch==3)
 	  {
 	  	cout<<"\n\nEnter the DIAMETER : ";
 	  	cin>>d;
 	  	ar=3.14*d*d;
 	  	cout<<"\nAREA = "<<ar;
	   }
    else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
  }

int sph_volume()               //function for finding the volume of sphere
  {
  	int ch;
  	float ar,r,vol,d;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tSPHERE - VOLUME";
 	cout<<"\n#note:-For calculating the volume you must have the value of area or length of the radius or diameter.";
 	cout<<"\n\n\tPress '1', if you have the AREA\n\tPress '2', if you have the RADIUS\n\tPress '3', if you have the DIAMETER";
 	cout<<"\nEnter your choice : ";
 	cin>>ch;
 	if(ch==1)
 	  {
 	  	cout<<"\n\nEnter the AREA : ";
 	  	cin>>ar;
 	  	r=pow((ar/(4*3.14)),0.5);
 	  	vol= 1.33*3.14*r*r*r;
 	  	cout<<"\n\tRadius = "<<r;
 	  	cout<<"\nVOLUME = "<<vol;
	   }
	else if(ch==2)
 	  {
 	  	cout<<"\n\nEnter the RADIUS : ";
 	  	cin>>r;
 	  	vol= 1.33*3.14*r*r*r;
 	  	cout<<"\nVOLUME = "<<vol;
	   }
	else if(ch==3)
 	  {
 	  	cout<<"\n\nEnter the DIAMETER : ";
 	  	cin>>d;
 	  	vol=3.14*d*d*d/6;
 	  	cout<<"\nVOLUME = "<<vol;
	   }
    else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
  }

int cone_csa()          //function for working with the curved surface area of cone
 {
   	int ch;
  	float tsa,csa,r,vol,h,l;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\tCONE - CURVED SURFACE AREA";
 	cout<<"\n#note:- For getting the curved surface area we need atleast the values of total surface area and radius or volume and radius";
 	cout<<"\n\n\tPress '1', if you have TOTAL SURFACE AREA and the RADIUS.";
    cout<<"\n\tPress '2', if you have VOLUME and the RADIUS."; 
    cout<<"\n\tPress '3', if you have SLANT HEIGHT and the RADIUS.";
    cout<<"\n\tPress '4', if you have HEIGHT and the RADIUS.";
    cout<<"\n\tPress '5', if you have HEIGHT and the SLANT HEIGHT.";
    cout<<"\n\tPress '6', if you have VOLUME and the HEIGHT."; 
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
    if (ch==1)
     {
     	cout<<"\n\nEnter the TOTAL SURFACE AREA : ";
     	cin>>tsa;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	csa=tsa-(3.14*r*r);
     	cout<<"\nCURVED SURFACE AREA = "<<csa<<" sq. units";
	 }
	else if(ch==2)
	 {
	    cout<<"\n\nEnter the VOLUME : ";
     	cin>>vol;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	h=((0.955*vol)/(r*r));
     	l=pow(((r*r)+(h*h)),0.5);
     	csa=3.14*r*l;
     	cout<<"\nCURVED SURFACE AREA = "<<csa<<" sq. units";	
	 }
	else if(ch==3)
	 {
	 	cout<<"\n\nEnter the SLANT HEIGHT : ";
     	cin>>l;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	if(l>r)
     	   {
			 	csa=3.14*r*l;
			 	cout<<"\nCURVED SURFACE AREA = "<<csa<<" sq. units";
		   }
		  else
		     cout<<"\nThe length of slant height is always greater than the radius. You have entered wrong values!!!";
	 }
	else if(ch==4)
	 {
	 	cout<<"\n\nEnter the HEIGHT : ";
     	cin>>h;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	l=pow(((r*r)+(h*h)),0.5);
     	csa=3.14*r*l;
     	cout<<"\nCURVED SURFACE AREA = "<<csa<<" sq. units";
	 }
	else if(ch==5)
	 {
	    cout<<"\n\nEnter the HEIGHT : ";
     	cin>>h;
     	cout<<"\nEnter the SLANT HEIGHT : ";
     	cin>>l;
     	 if(l>h)
     	   {
			    r=pow(((l*l)-(h*h)),0.5);
			 	csa=3.14*r*l;
			 	cout<<"\nCURVED SURFACE AREA = "<<csa<<" sq. units";
		   }
		  else
		     cout<<"\nThe length of slant height is always greater than the height. You have entered wrong values!!!";
	 }
	else if(ch==6)
	 {
	    cout<<"\n\nEnter the VOLUME : ";
     	cin>>vol;
     	cout<<"\nEnter the HEIGHT : ";
     	cin>>h;
     	r=pow((0.955*vol)/h,0.5);
     	l=pow(((r*r)+(h*h)),0.5);
     	csa=3.14*r*l;
     	cout<<"\nCURVED SURFACE AREA = "<<csa<<" sq. units";		
	 }
	 else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }
 
 int cone_tsa()                     //function for working with the total surface area of cone
  {
   	int ch;
  	float tsa,csa,r,vol,h,l;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\tCONE - CURVED SURFACE AREA";
 	cout<<"\n#note:- For getting the total surface area we need atleast the values of curved surface area and radius or volume and radius";
 	cout<<"\n\n\tPress '1', if you have CURVED SURFACE AREA and the RADIUS.";
    cout<<"\n\tPress '2', if you have VOLUME and the RADIUS."; 
    cout<<"\n\tPress '3', if you have SLANT HEIGHT and the RADIUS.";
    cout<<"\n\tPress '4', if you have HEIGHT and the RADIUS.";
    cout<<"\n\tPress '5', if you have HEIGHT and the SLANT HEIGHT.";
    cout<<"\n\tPress '6', if you have VOLUME and the HEIGHT."; 
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
    if (ch==1)
     {
     	cout<<"\n\nEnter the CURVED SURFACE AREA : ";
     	cin>>csa;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
        tsa=csa+(3.14*r*r);
     	cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units";
	 }
	else if(ch==2)
	 {
	    cout<<"\n\nEnter the VOLUME : ";
     	cin>>vol;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	h=((0.955*vol)/(r*r));
     	l=pow(((r*r)+(h*h)),0.5);
     	csa=3.14*r*l;
     	tsa=csa+(3.14*r*r);
     	cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units";	
	 }
	else if(ch==3)
	 {
	 	cout<<"\n\nEnter the SLANT HEIGHT : ";
     	cin>>l;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	if(l>r)
     	   {
			    csa=3.14*r*l;
     	        tsa=csa+(3.14*r*r);
			 	cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units";
		   }
		  else
		     cout<<"\nThe length of slant height is always greater than the radius. You have entered wrong values!!!";
	 }
	else if(ch==4)
	 {
	 	cout<<"\n\nEnter the HEIGHT : ";
     	cin>>h;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	l=pow(((r*r)+(h*h)),0.5);
     	csa=3.14*r*l;
     	tsa=csa+(3.14*r*r);
     	cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units";
	 }
	else if(ch==5)
	 {
	    cout<<"\n\nEnter the HEIGHT : ";
     	cin>>h;
     	cout<<"\nEnter the SLANT HEIGHT : ";
     	cin>>l;
     	if(l>h)
     	   {
     	   	    r=pow(((l*l)-(h*h)),0.5);
     	        csa=3.14*r*l;
     	        tsa=csa+(3.14*r*r);
			    cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units";
		   }
		  else
		     cout<<"\nThe length of slant height is always greater than the height. You have entered wrong values!!!";
	 }
	else if(ch==6)
	 {
	    cout<<"\n\nEnter the VOLUME : ";
     	cin>>vol;
     	cout<<"\nEnter the HEIGHT : ";
     	cin>>h;
     	r=pow((0.955*vol)/h,0.5);
     	l=pow(((r*r)+(h*h)),0.5);
     	csa=3.14*r*l;
     	tsa=csa+(3.14*r*r);
     	cout<<"\nTOTAL SURFACE AREA = "<<tsa<<" sq. units";		
	 }
	 else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 
  }
  
int cone_volume()                            //function for working with the volume of cone
 {
   	int ch;
  	float tsa,csa,r,vol,l,h;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCONE - VOLUME";
 	cout<<"\n#note:- For getting the volume we need atleast the values of total surface area and radius or curved surface area and radius";
 	cout<<"\n\n\tPress '1', if you have the CURVED SURFACE AREA and the RADIUS.";
    cout<<"\n\tPress '2', if you have the TOTAL SURFACE AREA and the RADIUS."; 
    cout<<"\n\tPress '3', if you have the CURVED SURFACE AREA and the SLANT HEIGHT.";
    cout<<"\n\tPress '4', if you have the SLANT HEIGHT and the HEIGHT.";
    cout<<"\n\tPress '5', if you have the RADIUS and the HEIGHT.";
    cout<<"\n\tPress '6', if you have the SLANT HEIGHT and the RADIUS.";
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
     if (ch==1)
     {
     	cout<<"\n\nEnter the CURVED SURFACE AREA : ";
     	cin>>csa;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
        l=csa/(3.14*r);
        h=pow(((l*l)-(r*r)),0.5);
        vol=1.05*r*r*h;
     	cout<<"\nVOLUME = "<<vol<<" cubic units";
	 }
	else if(ch==2)
	 {  
	    cout<<"\n\nEnter the TOTAL SURFACE AREA : ";
     	cin>>tsa;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	csa=tsa-(3.14*r*r);
     	l=csa/(3.14*r);
     	h=pow(((l*l)-(r*r)),0.5);
     	vol=1.05*r*r*h;
     	cout<<"\nVOLUME = "<<vol<<" cubic units";	
	 }
	else if(ch==3)
	 {
	 	cout<<"\n\nEnter the CURVED SURFACE AREA : ";
     	cin>>csa;
     	cout<<"\nEnter the SLANT HEIGHT : ";
     	cin>>l;
     	r=csa/(3.14*l);
     	h=pow(((l*l)-(r*r)),0.5);
     	vol=1.05*r*r*h;
     	cout<<"\nVOLUME = "<<vol<<" cubic units";
	 }
	else if(ch==4)
	 {
	 	cout<<"\n\nEnter the SLANT HEIGHT : ";
     	cin>>l;
     	cout<<"\nEnter the HEIGHT : ";
     	cin>>h;
     	if(l>h)
     	   {
     	   	r=pow(((l*l)-(h*h)),0.5);
            vol=1.05*r*r*h;
     	    cout<<"\nVOLUME = "<<vol<<" cubic units";
		   }
		  else
		     cout<<"\nThe length of slant height is always greater than the height. You have entered wrong values!!!";
	 }
	else if(ch==5)
	 {
	    cout<<"\n\nEnter the HEIGHT : ";
     	cin>>h;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	vol=1.05*r*r*h;
     	cout<<"\nVOLUME = "<<vol<<" cubic units";	
	 }
	else if(ch==6)
	 {
	    cout<<"\n\nEnter the SLANT HEIGHT : ";
     	cin>>l;
     	cout<<"\nEnter the RADIUS : ";
     	cin>>r;
     	if(l>r)
     	   {
     	   	h=pow(((l*l)-(r*r)),0.5);
     	    vol=1.05*r*r*h;
     	    cout<<"\nVOLUME = "<<vol<<" cubic units";	
		   }
		  else
		     cout<<"\nThe length of slant height is always greater than the height. You have entered wrong values!!!";
	 }
	 else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }
 
int cyl_csa()                       //function for working with the curved surface area of cylinder
 {
 	int ch;
  	float tsa,csa,r,vol,d,h;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\tCYLINDER - CURVED SURFACE AREA";
 	cout<<"\n#note:- For getting the curved surface area we need atleast the values of total surface area and radius or volume and radius or height";
    cout<<"\n\n\tPress '1', if you have TOTAL SURFACE AREA and the RADIUS.";
    cout<<"\n\tPress '2', if you have VOLUME and the RADIUS.";
    cout<<"\n\tPress '3', if you have VOLUME and the HEIGHT.";
    cout<<"\n\tPress '4', if you have HEIGHT and the RADIUS.";
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
    if(ch==1)
      {
      	cout<<"\n\nEnter the TOTAL SURFACE AREA : ";
      	cin>>tsa;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	csa=tsa-(6.28*r*r);
      	cout<<"\n\tCURVED SURFACE AREA = "<<csa<<" sq. units";
	  }
	else if(ch==2)
	 {
	 	cout<<"\n\nEnter the VOLUME : ";
      	cin>>vol;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	h=vol/(3.14*r*r);
      	csa=6.28*r*h;
      	cout<<"\n\tCURVED SURFACE AREA = "<<csa<<" sq. units";
	 }
	else if(ch==3)
	 {
	    cout<<"\n\nEnter the VOLUME : ";
      	cin>>vol;
      	cout<<"\nEnter the value of HEIGHT : ";
      	cin>>h;
      	r=vol/(3.14*h);
      	csa=6.28*r*h;
      	cout<<"\n\tCURVED SURFACE AREA = "<<csa<<" sq. units";	
	 }
	else if(ch==4)
	 {
	    cout<<"\n\nEnter the HEIGHT : ";
      	cin>>h;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	csa=6.28*r*h;
      	cout<<"\n\tCURVED SURFACE AREA = "<<csa<<" sq. units";	
	 }
 }
 
int cyl_tsa()                  //function for working with the total surface area of cylinder
 {
 	int ch;
  	float tsa,csa,r,vol,d,h;
    cout<<"\n\n\tPress '1', if you have CURVED SURFACE AREA and the RADIUS.";
    cout<<"\n\tPress '2', if you have CURVED SURFACE AREA and the HEIGHT.";
	cout<<"\n\tPress '3', if you have VOLUME and the RADIUS.";
    cout<<"\n\tPress '4', if you have VOLUME and the HEIGHT.";
    cout<<"\n\tPress '5', if you have HEIGHT and the RADIUS.";
   	cout<<"\n\nEnter your choice : ";
    cin>>ch;
    if(ch==1)
     {
     	cout<<"\n\nEnter the CURVED SURFACE AREA : ";
      	cin>>csa;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	tsa=csa+(6.28*r*r);
      	cout<<"\n\tTOTAL SURFACE AREA = "<<tsa<<" sq. units";
	 }
	else if(ch==2)
	 {
	 	cout<<"\n\nEnter the CURVED SURFACE AREA : ";
      	cin>>csa;
      	cout<<"\nEnter the value of HEIGHT : ";
      	cin>>h;
      	r=csa/(6.28*h);
      	tsa=csa+(6.28*r*r);
      	cout<<"\n\tTOTAL SURFACE AREA = "<<tsa<<" sq. units";
	 }
	else if(ch==3)
	 {
	 	cout<<"\n\nEnter the VOLUME : ";
      	cin>>vol;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	h=vol/(3.14*r*r);
      	tsa= (6.28*r*h)+(3.14*r*r);
      	cout<<"\n\tTOTAL SURFACE AREA = "<<tsa<<" sq. units";
	 }
	else if(ch==4)
	 {
	    cout<<"\n\nEnter the VOLUME : ";
      	cin>>vol;
      	cout<<"\nEnter the value of HEIGHT : ";
      	cin>>h;
      	r=pow((vol/(3.14*h)),0.5);
      	tsa= (6.28*r*h)+(3.14*r*r);
      	cout<<"\n\tTOTAL SURFACE AREA = "<<tsa<<" sq. units";	
	 }
	else if(ch==5)
	 {
	    cout<<"\n\nEnter the VOLUME : ";
      	cin>>vol;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
		tsa= (6.28*r*h)+(3.14*r*r);	
		cout<<"\n\tTOTAL SURFACE AREA = "<<tsa<<" sq. units";
	 }
	else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }
 
int cyl_volume()                   //function for working with the volume of cylinder
 {
 	int ch;
  	float tsa,csa,r,vol,d,h;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tCYLINDER - VOLUME";
 	cout<<"\n#note:- For getting the volume we need atleast the values of total surface area and radius or curved surfacearea and radius or height";
 	cout<<"\n\n\tPress '1', if you have CURVED SURFACE AREA and RADIUS.";
    cout<<"\n\tPress '2', if you have CURVED SURFACE AREA and HEIGHT.";
    cout<<"\n\tPress '3', if you have TOTAL SURFACE AREA and RADIUS.";
    cout<<"\n\tPress '4', if you have HEIGHT and RADIUS.";
    if(ch==1)
     {
     	cout<<"\n\nEnter the CURVED SURFACE AREA : ";
      	cin>>csa;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	h=csa/(6.28*r);
      	vol= 3.14*r*r*h;
      	cout<<"\n\tVOLUME = "<<vol<<" cubic units";
	 }
	else if(ch==2)
	 {
	 	cout<<"\n\nEnter the CURVED SURFACE AREA : ";
      	cin>>csa;
      	cout<<"\nEnter the value of HEIGHT : ";
      	cin>>h;
      	r=csa/(6.28*h);
      	vol= 3.14*r*r*h;
      	cout<<"\n\tVOLUME = "<<vol<<" cubic units";
	 }
	else if(ch==3)
	 {
	 	cout<<"\n\nEnter the TOTAL SURFACE AREA : ";
      	cin>>tsa;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	csa=tsa-(3.14*r*r);
      	h=csa/(6.28*r);
      	vol= 3.14*r*r*h;
      	cout<<"\n\tVOLUME = "<<vol<<" cubic units";
	 }
	else if(ch==4)
	 {
	 	cout<<"\n\nEnter the HEIGHT : ";
      	cin>>h;
      	cout<<"\nEnter the value of RADIUS : ";
      	cin>>r;
      	vol= 3.14*r*r*h;
      	cout<<"\n\tVOLUME = "<<vol<<" cubic units";
	 }
	else
	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";
	return 0;	
 }
 
int cube()                  //function for working with the cube
 {
    int ch;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tCUBE";
	cout<<"\n\n\n\tPress '1' for AREA\t\tPress '2' for VOLUME\t\tPress '3' for length of SIDES";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	  {
	  	case 1: cube_area();
	  	 break;
	  	case 2: cube_volume();
	  	 break;
	  	case 3: cube_side(); 
	  	 break;
	  	default:
	  	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";	
	  }
	return 0;	
 }
 
int cuboid()                        //function for working with cuboid
 {
  	int ch;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tCUB0ID";
	cout<<"\n\n\nPress '1' for AREA\t\tPress '2' for VOLUME";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	  {
	  	case 1: cub_area();
	  	 break;
	  	case 2: cub_volume();
	  	 break;
	  	default:
	  	 cout<<"\n\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";	
	  }
	return 0;
 }
  
int sphere()                        //function for working with sphere
 {
 	int ch;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tSPHERE";
	cout<<"\n\n\nPress '1' for AREA\t\tPress '2' for VOLUME";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	  {
	  	case 1: sph_area();
	  	 break;
	  	case 2: sph_volume();
	  	 break;
	  	default:
	  	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";	
    }
  return 0;
 }
 
int cone()                         //function for working with cone
 {
 	int ch;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tCONE";
	cout<<"\n\n\n\tPress '1' for CURVED SURFACE AREA\n\tPress '2' for TOTAL SURFACE AREA\n\tPress '3' for VOLUME";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	  {
	  	case 1: cone_csa();
	  	 break;
	  	case 2: cone_tsa();
	  	 break;
	  	case 3: cone_volume();
	  	 break;
	  	default:
	  	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";	
    }
  return 0;
 }  
 
int cylinder()                    //function for working with cylinder
 {
 	int ch;
	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\t\tCONE";
	cout<<"\n\n\n\tPress '1' for CURVED SURFACE AREA\n\tPress '2' for TOTAL SURFACE AREA\n\tPress '3' for VOLUME";
	cout<<"\n\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	  {
	  	case 1: cyl_csa();
	  	 break;
	  	case 2: cyl_tsa();
	  	 break;
	  	case 3: cyl_volume();
	  	 break;
	  	default:
	  	 cout<<"\n\\t\t\t!!!WRONG INPUT!!!";
	 cout<<"\n_____________________________________________________________________________________________________________";	
    }
  return 0;
 }

int DDD()
 {
 	int ch;
  	cout<<"\n\n\n_____________________________________________________________________________________________________________\n";
	cout<<"\n\t\t\t\t\tEQUILATERAL 3-DIMENSIONAL OBJECTS";
	cout<<"\n\n\n\tPress '1' for working with CUBE\t\t\tPress '4' for working with CONE";
	cout<<"\n\tPress '2' for working with CUBOID\t\tPress '5' for working with CYLINDER";
	cout<<"\n\tPress '3' for working with SPHERE";
  	cout<<"\n\nEnter your choice : ";
  	cin>>ch;
  	switch(ch)
  	  {
  	  case 1: cube(); 
  	    break;
  	  case 2: cuboid();
  	    break;
  	  case 3: sphere();
  	    break;
  	  case 4: cone();
  	    break;
      case 5: cylinder();
  	    break;
  	  default:
  	  	cout<<"\n\t\t!!!WRONG INPUT!!!";
      }
    cout<<"\n_____________________________________________________________________________________________________________";
 return 0;
 }

int main()                               //main function
{
	int choice;
	cout<<"\n\n\n\t\t\t\t\t\tSCIENTIFIC CALCULATOR";
 while(1)
 {
 
	cout<<"\n\n\n\n\n\tSelect the operation you want to do :";
	cout<<"\n\nPress '1' for ADDITION\t\t\t\tPress '2' for SUBTRACTION\t\tPress '0' to EXIT\nPress '3' for MULTIPLICATION\t\t\tPress '4' for DIVISION";
	cout<<"\nPress '5' for getting EXPONENTIAL VALUE\t\tPress '6' for TRIGONOMETRY";
	cout<<"\nPress '7' for MATRICE OPERATION\t\t\tPress '8' for solving QUADRATIC EQUATION";
	cout<<"\nPress '9' for working with 2-D structures\tPress '10' for working with COMPLEX NUMBERS";
	cout<<"\nPress '11' for working with 3-D structures";
	cout<<"\n\nEnter your choice : ";
	cin>>choice;
    switch(choice)
     {
     	case 0: exit(-1);
     		break;
     	case 1: sum();
     		break;
     	case 2: sub();
     		break;
     	case 3: mult();
     		break;
     	case 4: div();
     		break;
     	case 5: exp();
     	    break;
     	case 6: trig();
     	    break;
     	case 7: matrice();
     	    break;
     	case 8: quad();
     	    break;
     	case 9: DD();
     	    break;
     	case 10: complex();
     	    break;
        case 11: DDD();
     	    break;
     	default:
     	  cout<<"\n\n\t\t\t!!!!!!WRONG INPUT!!!!!!";
     	break;
	 }
}
	return 0;
}
