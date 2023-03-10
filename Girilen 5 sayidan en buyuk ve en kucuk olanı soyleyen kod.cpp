#include<iostream> 
using namespace std;
int main()
{
	int a,s,d,f,g,h ;
	cout<<"lutfen birinci sayiyi giriniz"<< endl;
	cin>>a;
	cout<<"lutfen ikinci sayiyi giriniz"<< endl;
	cin>>s;
	cout<<"lutfen ucuncu sayiyi giriniz"<< endl;
	cin>>d;
	cout<<"lutfen dorduncu sayiyi giriniz"<< endl;
	cin>>f;
	cout<<"lutfen besinci sayiyi giriniz"<< endl;
	cin>>g;
	if(a>s>d>f>g)
	{
	cout<<"en buyuk a en kucuk g"<< endl ;
    }
     else if (a>s&&s>d&&d>f&&f>g)
    {
    	cout<<"en buyuk a en kucuk f"<< endl;
	}
	else if(a>s&&s>g&&g>f&&f>d)
	{
	cout<<"en buyuk a en kucuk d"<< endl;
    }
    else if(a>d>f>g>s)
    {
    	cout<<"en buyuk a en kucuk s"<< endl;
	}
	else if(s>a>d>f>g)
	{
		cout<<"en buyuk s en kucuk g"<< endl;
	}
	else if(s>a>d>g>f)
	{
		cout<<"en buyuk s en kucuk f"<< endl;
	}
		else if(s>a>f>g>d)
	{
		cout<<"en buyuk s en kucuk d"<< endl;
	}
		else if(s>d>f>g>a)
	{
		cout<<"en buyuk s en kucuk a"<< endl;
	}
		else if(d>a>s>f>g)
	{
		cout<<"en buyuk d en kucuk g"<< endl;
	}
			else if(d>a>s>g>f)
	{
		cout<<"en buyuk d en kucuk f"<< endl;
	}
			else if(d>a>g>f>s)
	{
		cout<<"en buyuk d en kucuk s"<< endl;
	}
			else if(d>g>s>f>a)
	{
		cout<<"en buyuk d en kucuk a"<< endl;
	}	
		else if(f>a>s>d>g)
	{
		cout<<"en buyuk f en kucuk g"<< endl;
	}
			else if(f>a>s>g>d)
	{
		cout<<"en buyuk f en kucuk d"<< endl;
	}
			else if(f>a>g>d>s)
	{
		cout<<"en buyuk f en kucuk s"<< endl;
	}
			else if(f>g>s>d>a)
	{
		cout<<"en buyuk f en kucuk a"<< endl;
	}
			else if(g>a>s>d>f)
	{
		cout<<"en buyuk g en kucuk f"<< endl;
	}
				else if(g>a>s>f>d)
	{
		cout<<"en buyuk g en kucuk d"<< endl;
	}
				else if(g>a>f>d>s)
	{
		cout<<"en buyuk g en kucuk s"<< endl;
	}
				else
	{
		cout<<"en buyuk g en kucuk a"<< endl;
	}
}




















