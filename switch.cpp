#include<iostream.h>
void main()
{
	int x;
	cout<<"Please input x:";
	cin>>x;
	if(x<=99)
	    switch(x/10)
	{
	case 0:cout<<"数值小于10\n";break;
    case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:cout<<"数值在10~99\n";break;
	}
		else
			if(x>=100)
				switch(x/1000)
			{
	             case 0:cout<<"数值100~999\n";break;
				 default:cout<<"数值大于1000\n";break;
			}
}