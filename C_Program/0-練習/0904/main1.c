/*�ӤH�ұo�|�p��A���ǵ|�ڪ��p�⤽���p�U�G
���J
�|�v
���J<��1000������
0�H
2000��>�צ��J>1000��������
5�H
3000��>�צ��J>2000��������
10�H
6000��>�צ��J>3000��������
15�H
���J>6000��������
20�H
��J�Y�H�����J�A�p��X���ǵ|�B�ι�ڱo�쪺���S�C�]7���^*/
//�]�p�ݳs��p��h�ӤH���ǵ|���p�A�����J�t�Ƭ���A�{�����p���i�H�ռg�X�{���^

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=0,b=0,c=0,cout=0;//���J,���|�B,��ڳ��S 	
	do
	{
		printf("�п�J���J:");
	    scanf("%d",&a);
	    if(a<0)
	    {
	    	break;
		}
	    else if(0<=a && a<=1000)
	    {
		    b=a*0;
		    c=a-b;
	    } 
	    else if(1000<=a && a<2000)
	    {
	 	    b=a*0.05;
		    c=a-b;
	    }
	    else if(2000<=a && a<3000)
	    {
		    b=a*0.1;
		    c=a-b;
	    }
	    else if(3000<=a && a<6000)
	    {
		    b=a*0.15;
		    c=a-b;
	    }
	    else
	    {
	    	b=a*0.2;
	    	c=a-b;
		}
	cout=cout+1;
	printf("%d�����|�B��:%d\n",cout,b);
    printf("%d����ڦ��J��:%d\n",cout,c);
    }while(a>=0);
    
	
	return 0;
}


