/*#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if(n<8){
		printf("����");
	}
	else if(n>=8 && n<=80) {
		printf("30000��");
	}
	
	else printf("22500��");
	
	return 0; 
}*/

/*#include <stdio.h>
int main()
{
	char sa, sb, n;
	scanf("%c %c", &sa, &sb);
	
	if(sa<sb){
		for(int i=sa;i<=sb;i++){
		 	if(i!=91 && i!=92 && i!=93 && i!=94 && i!=95 && i!=96){
				printf("%c ", i);
			}
		}
	}
	else{
		if((sa>=97 && sa<=122) ||(sb<=65 && sb>=90)){
			for(int i=sa;i<='z';i++){
				printf("%c ", i);
			}
			for(int i='A';i<=sb;i++){
				printf("%c ", i);
			}
		}
		else{
			for(int i=sa;i>=sb;i--){
				if(i!=91 && i!=92 && i!=93 && i!=94 && i!=95 && i!=96){
				printf("%c ", i);
				}
			}
		}
	}
	
	return 0;
} */


#include <stdio.h>

int atoi (char n[], int count);

int main()
{
	char n[4];
	int val;
	scanf("%s", &n);
	
	if((n[0]>='a' && n[0]<='z') || (n[0]>='A' && n[0]<='Z')){
		printf("���� %c�� �ڵ� ����%d �Դϴ�.", n[0],n[0]);
	}
	
	else if((n[0]>=33 && n[0]<=47) || (n[0]>=58 && n[0]<=64) || (n[0]>=91 && n[0]<=96) || (n[0]>=123 && 126)){
		printf("��Ÿ����  %c�� �ڵ� ���� %d �Դϴ�", n[0],n[0]);
	}
	
	else if (n[0]>=48 && n[0]<=57){
		val=atoi(n,4);
		printf("���� %d�� ���� ���� %c �Դϴ�.", val, val);
	}	 
}

int atoi(char n[], int count)
{
	int number, val=0;
	
	for(int i=0;i<count;i++){
		if(n[i]>=48 && n[i]<=57){
			switch(n[i])
			{
				case 48:
					number=0;
					break;
				case 49:
					number=1;
					break;	
				case 50:
					number=2;
					break;	
				case 51:
					number=3;
					break;
				case 52:
					number=4;
					break;
				case 53:
					number=5;
					break;
				case 54:
					number=6;
					break;
				case 55:
					number=7;
					break;
				case 56:
					number=8;
					break;
				case 57:
					number=9;
					break;
			}
			val=val*10+number;
			
		}
	}
	
	return val;
}



//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	switch (n%3==0 && n%5==0){
//		case 1:
//			printf( "3�� ����̸鼭 5�� ����Դϴ�.");
//			break;
//		default: 
//			printf( "����� �ƴմϴ�");
//			break; 
//	}
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	switch (n%2==0){
//		case 1:
//			printf("¦���Դϴ�.");
//			break; 
//			
//		default:
//			printf("Ȧ���Դϴ�.");
//			break; 
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int score;
//	scanf("%d", &score);
//	
//	switch(score/10){
//		case 10:
//			printf("A");
//			break;
//		
//		case 9:
//			printf("A");
//			break;
//			
//		case 8:
//			printf("B");
//			break;
//			
//		case 7:
//			printf("C");
//			break;
//			
//		case 6:
//			printf("D");
//			break;
//			
//		default:
//			printf("F");
//			break;
//	}
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	char sex;
//	int age, uu;
//	
//	scanf("%c", &sex);
//	scanf("%d", &age);
//	
//	if(age>=20 && sex=='M') uu=1;
//	else if(age>=20 && sex=='F') uu=2;
//	else if(age<20 && sex=='M') uu=3;
//	else if(age<20 && sex=='F') uu=4;
//	
//	switch(uu){
//		case 1:
//			printf("���γ����Դϴ�");
//			break;
//			
//		case 2:
//			printf("���ο����Դϴ�");
//			break;
//			
//		case 3:
//			printf("�̼��Ⳳ���Դϴ�");
//			break;
//			
//		case 4:
//			printf("�̼��⿩���Դϴ�");
//			break; 
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int m;
//	
//	scanf("%d", &m);
//	
//	switch(m){
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12: 
//			printf("%d���� �ϼ��� 31�� �Դϴ�",m);
//			break;
//		case 2:
//			printf("%d���� �ϼ��� 28�� �Դϴ�",m);
//			break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			printf("%d���� �ϼ��� 30 �Դϴ�",m);
//			break; 
//		default:
//			printf("���� �߸� �Է� �Ǿ����ϴ�");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if(n>=0){
//		printf("%d", n);
//	}
//	
//	else printf("%d", -n);
//	
//	return 0; 
//}

//#include <stdio.h>
//
//int main()
//{
//	int n,i=0, sum=3;
//	scanf("%d", &n);
//	
//	while(i<n){
//		printf("%d ", sum);
//		sum=sum+3;
//		i++;	
//	}
//	return 0;
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	int i=65;
//	while(i<'Z'){
// 		printf("%c ", i);
// 		i++;
//	 }
//	 return 0;
//}

//#include <stdio.h>
//
//int main
//{
//	int n, score;
//	int i=0, sum=0, avr=0;
//	scanf("%d", &n);
//	
//	while(i<n){
//		scanf("%d", &score[i]);
//		sum=sum+score;
//	}
//	
//	avr=sum/n;
//	printf("%d", sum);
//	printf("%.2f", avr);
//	
//	return 0;
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	int sum=0;
//	
//	for(int i=1;i<=100; i++){
//		if(i%3==0){
//			sum+=i;
//		}
//	}
//	printf("%d", sum);
//} 

//#include <stdio.h>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			if(i*j==10){
//			printf("%d ", i);
//			}
//		}
//	}
//	
//	return 0;
//}

