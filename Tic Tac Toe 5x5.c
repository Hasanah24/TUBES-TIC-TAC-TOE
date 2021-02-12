#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
//kamus data
char s[25]= {'0','1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25'};
char comp[10]={'C','O','M','P','U','T','E','R'},p1[10],p2[10];
int move=0,pm,mm,cnt,i,mode;
int checkwin();
int computer();
void board();


//algortima
int main()
{
	int menu;
	do{
	system ("cls");
 	printf("\n");
 	printf("\n");
  	printf(" ,--------. ,--.  ,-----.     ,--------.   ,---.    ,-----.     ,--------.  ,-----.  ,------.  \n");
   	printf(" '--.  .--' |  | '  .--./     '--.  .--'  /  O  \\  '  .--./     '--.  .--' '  .-.  ' |  .---'  \n");
  	printf("    |  |    |  | |  |            |  |    |  .-.  | |  |            |  |    |  | |  | |  `--,   \n");
  	printf("    |  |    |  | '  '--'\\        |  |    |  | |  | '  '--'\\        |  |    '  '-'  ' |  `---.  \n");
  	printf("    `--'    `--'  `-----'        `--'    `--' `--'  `-----'        `--'     `-----'  `------'  \n");
  	printf("\n");
  	printf("\n");
	
	printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t\t|1.Start             |\n");
	printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t\t|2.Help              |\n");
	printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t\t|3.Highscore         |\n");
	printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t\t|4.Credits           |\n");
	printf("\t\t\t\t\t----------------------\n");
	printf("\t\t\t\t\t|5.Exit              |\n");
	printf("\t\t\t\t\t----------------------\n");
	printf("\n\t\t\t\t\tEnter Your choice:");
	scanf("%d", &menu);
	if (menu==1)
	opponent();
	if (menu==2)
	help();
	if (menu==4)
	credits();
//	if (menu==5)
//	exits();
	}while (menu !=2);
	return 0;
}

void opponent(){
	int x; //variabel x saat memilih di modul pemain
	system("cls"); //menghapus layar
	do{
			system ("cls");
 			printf("\n");
 			printf("\n");
  			printf(" ,--------. ,--.  ,-----.     ,--------.   ,---.    ,-----.     ,--------.  ,-----.  ,------.  \n");
   			printf(" '--.  .--' |  | '  .--./     '--.  .--'  /  O  \\  '  .--./     '--.  .--' '  .-.  ' |  .---'  \n");
  			printf("    |  |    |  | |  |            |  |    |  .-.  | |  |            |  |    |  | |  | |  `--,   \n");
  			printf("    |  |    |  | '  '--'\\        |  |    |  | |  | '  '--'\\        |  |    '  '-'  ' |  `---.  \n");
  			printf("    `--'    `--'  `-----'        `--'    `--' `--'  `-----'        `--'     `-----'  `------'  \n");
  			printf("\n");
  			printf("\n");
		
		printf("\t\t\t\t\tPlay with computer:(1,1)\n"); //menampilkan saat play with friend
		printf("\t\t\t\t\tPlay with friend:(1,2)\n"); //menampilkan saat play with computer
		printf("\t\t\t\t\tPick your opponent: "); //menampilkan saat pick your opponent
		scanf("%d", &x); //menerima masukan kedalam program
		if (x == 1) //jika x =1
		mainmenu(); //maka masuk ke modul size
//		if (x == 2)
//		size();
		
		if(x!=1&&x!=2){ //jika x tidak sama dengan 1 dan x tidak sama dengan 2
		printf("Just only put 1 and 2"); //maka hanya bisa meninputkan 1 dan 2 saja
		}
	}while(x!=1&&x!=2); //perulangan jika x tidak sama dengan 1 dan 2
}
	
void help (){ // modul menampilkan help
	int y; // variabel y saat memilih modul help
	system("cls"); // menghapus layar
	{
		printf("cara bermain\n 1.silahkan pilih start\n 2.lalu pilih opponent\n 3.setelah memilih, inputkan nama\n 4.pilih ukuran untuk memulai\n 5.game sudah bisa dimainkan");//
		// menampilkan dilayar tata cara bermain
		printf("\n 6.back to menu"); // menampilkan dilayar opsi 6
		scanf("%d", &y);// inputan variabel y
	}

}

void credits (){ // modul menampilkan credits
	int a; // variabel a saat memilih modul credits
	system ("cls"); // menghapus layar
	{
		printf(" \t\t\t<><><>Credits By<><><>\n\t\t\t\tHasanah\n \t\t\t\t  &\n\t\t\tRyrie Ceisha Ramadhanty");
		// menampilkan dilayar 
		scanf("%d", &a); // menginputkan variabel a
	}
}

//void exits(){
//	int u;
//	system ("cls");
//	{
//		printf("\t\t\t<><><>Thank you<><><>\n\t\t\t\tfor\n \t\t\t\t  \n\t\t\tPlaying");
//		scanf("%d", &u);
//	}
//}
	
int mainmenu(){
	int player=1,i,c,choice;
	char mark;
	int waktu_awal=clock();
	scanf("%d",&mode);
	int waktu_akhir=clock();
	if(waktu_akhir-waktu_awal > 5000){
	printf("waktu input>5 detik");
	system("pause");
	}
	switch(mode)     // 
	{
		case 1:
		printf("\t\t\t\t\tEnter name of player\n");
		scanf("%s",&p2);
		do
		{
			board();
			player=(player%2)?1:2;
			if(player==2)
			{
				printf("\t\t\t\t\t%s\n, \t\t\t\t\tenter a pos: ", p2);
				int waktu_awal=clock();
				scanf("%d", &choice);
				int waktu_akhir=clock();
				if(waktu_akhir-waktu_awal > 5000){
					printf("waktu input>5 detik");
					system("pause");
				}
				
			}
			else
				choice=computer();
			mark=(player==1)?'X':'O'; 
			if(choice==1&&s[1]=='1')
			{
				s[1]=mark;
				move++;
				pm=1;
			}
			else if(choice==2&&s[2]=='2')
			{
				s[2]=mark;
				move++;
				pm=2;
			}
			else if(choice==3&&s[3]=='3')
			{
				s[3]=mark;
				move++;
				pm=3;
			}
			else if(choice==4&&s[4]=='4')
			{
				s[4]=mark;
				move++;
				pm=4;
			}
			else if(choice==5&&s[5]=='5')
			{
				s[5]=mark;
				move++;
				pm=5;
			}
			else if(choice==6&&s[6]=='6')
			{
				s[6]=mark;
				move++;
				pm=6;
			}
			else if(choice==7&&s[7]=='7')
			{
				s[7]=mark;
				move++;
				pm=7;
			}
			else if(choice==8&&s[8]=='8')
			{
				s[8]=mark;
				move++;
				pm=8;
			}
			else if(choice==9&&s[9]=='9')
			{
				s[9]=mark;
				move++;
				pm=9;
			}
			else if(choice==10&&s[10]=='10')
			{
				s[10]=mark;
				move++;
				pm=10;
			}
			else if(choice==11&&s[11]=='11')
			{
				s[11]=mark;
				move++;
				pm=11;
			}
			else if(choice==12&&s[12]=='12')
			{
				s[12]=mark;
				move++;
				pm=12;
			}
			else if(choice==13&&s[13]=='13')
			{
				s[13]=mark;
				move++;
				pm=13;
			}
			else if(choice==14&&s[14]=='14')
			{
				s[14]=mark;
				move++;
				pm=14;
			}
			else if(choice==15&&s[15]=='15')
			{
				s[15]=mark;
				move++;
				pm=15;
			}
			else if(choice==16&&s[16]=='16')
			{
				s[16]=mark;
				move++;
				pm=16;
			}
			else if(choice==17&&s[17]=='17')
			{
				s[17]=mark;
				move++;
				pm=17;
			}
			else if(choice==18&&s[18]=='18')
			{
				s[18]=mark;
				move++;
				pm=18;
			}
			else if(choice==19&&s[19]=='19')
			{
				s[19]=mark;
				move++;
				pm=19;
			}
			else if(choice==20&&s[20]=='20')
			{
				s[20]=mark;
				move++;
				pm=20;
			}
			else if(choice==21&&s[21]=='21')
			{
				s[21]=mark;
				move++;
				pm=21;
			}
			else if(choice==22&&s[22]=='22')
			{
				s[22]=mark;
				move++;
				pm=22;
			}
			else if(choice==23&&s[23]=='23')
			{
				s[23]=mark;
				move++;
				pm=23;
			}
			else if(choice==24&&s[24]=='24')
			{
				s[24]=mark;
				move++;
				pm=24;
			}
			else if(choice==25&&s[25]=='25')
			{
				s[25]=mark;
				move++;
				pm=25;
			}
			else
			{
				printf("Invalid move ");
				player--;
				getch();
			}
			i=checkwin();
			player++;
		}while(i==- 1);
		board();
		if(i==1)
		{
			--player;
			if(player==1)
				printf("Player %s win ",comp);
			else
				printf("Player %s win ",p2);
		}
		else
			printf("Game draw");
		getch();
		return 0;
		
		case 2:
		printf("Enter the name of both the player\n");
		scanf("%s%s",p1,p2);
		do
		{   
			board();
			player=(player%2)?1:2;
			if(player==1)
				printf("Player %s,Move: ",p1);
			else
				printf("Player %s,Move: ",p2);
			
			scanf("%d", &choice);
			mark=(player==1)?'X':'O';
			if(choice==1&&s[1]=='1')
				s[1]=mark;
			else if(choice==2&&s[2]=='2')
				s[2]=mark;
			else if(choice==3&&s[3]=='3')
				s[3]=mark;
			else if(choice==4&&s[4]=='4')
				s[4]=mark;
			else if(choice==5&&s[5]=='5')
				s[5]=mark;
			else if(choice==6&&s[6]=='6')
				s[6]=mark;
			else if(choice==7&&s[7]=='7')
				s[7]=mark;
			else if(choice==8&&s[8]=='8')
				s[8]=mark;
			else if(choice==9&&s[9]=='9')
				s[9]=mark;
			else if(choice==10&&s[10]=='10')
				s[10]=mark;
			else if(choice==11&&s[11]=='11')
				s[11]=mark;
			else if(choice==12&&s[12]=='12')
				s[12]=mark;
			else if(choice==13&&s[13]=='13')
				s[13]=mark;
			else if(choice==14&&s[14]=='14')
				s[14]=mark;
			else if(choice==15&&s[15]=='15')
				s[15]=mark;
			else if(choice==16&&s[16]=='16')
				s[16]=mark;
			else if(choice==17&&s[17]=='17')
				s[17]=mark;
			else if(choice==18&&s[18]=='18')
				s[18]=mark;
			else if(choice==19&&s[19]=='19')
				s[19]=mark;
			else if(choice==20&&s[20]=='20')
				s[20]=mark;
			else if(choice==21&&s[21]=='21')
				s[21]=mark;
			else if(choice==22&&s[22]=='22')
				s[22]=mark;
			else if(choice==23&&s[23]=='23')
				s[23]=mark;
			else if(choice==24&&s[24]=='24')
				s[24]=mark;
			else if(choice==25&&s[25]=='25')
				s[25]=mark;	
			else
			{
				printf("Invalid move ");
				player--;
				getch();
			}
			i = checkwin();
			player++;
		}while(i==-1);
		board();
		if (i==1)
		{
			if(player==2)
				printf("%s win",p1);
			else
				printf("%s win ",p2);
		}
		else
			printf("Game draw");
		getch();
		return 0;
		default:printf("Invalid Choice\n");
		getch();
		
	}
	return 0;
}

int checkwin()
{
	if (s[1]==s[2]==s[3]&&s[3]==s[4]==s[5]) return 1; //vertikal baris 1
	else if (s[6]==s[7]==s[8]&&s[8]==s[9]==s[10])return 1; //vertikal baris 2
	else if (s[11]==s[12]==s[13]&&s[13]==s[14]==s[15])return 1; //vertikal baris 3
	else if (s[16]==s[17]==s[18]&&s[18]==s[19]==s[20])return 1; //vertikal baris 4
	else if (s[21]==s[22]==s[23]&&s[23]==s[24]==s[25])return 1; //vertikal baris 5
	else if (s[1]==s[6]==s[11]&&s[11]==s[16]==s[21])return 1; //harizontal kolom 1
	else if (s[2]==s[7]==s[12]&&s[12]==s[17]==s[22])return 1; //horizontal kolom 2
	else if (s[3]==s[8]==s[13]&&s[13]==s[18]==s[23])return 1; //horizontal kolom 3
	else if (s[4]==s[9]==s[14]&&s[14]==s[19]==s[24])return 1; //horizontal kolom 4
	else if (s[5]==s[10]==s[15]&&s[15]==s[20]==s[25])return 1; //horizontal kolom 5
	else if (s[1]==s[7]==s[13]&&s[13]==s[19]==s[25])return 1; //diagonal
	else if (s[5]==s[9]==s[13]&&s[13]==s[17]==s[21])return 1; //diagonal
	else if (s[1]!='1'&&s[2]!='2'&&s[3]!='3'&&s[4]!='4'&&s[5]!='5'&&s[6]!='6'&&s[7]!='7'&&s[8]!='8'&&s[9]!='9'&&s[10]!='10'&&s[11]!='11'&&s[12]!='12'&&s[13]!='13'&&s[14]!='14'&&s[15]!='15'&&s[16]!='16'&&s[17]!='17'&&s[18]!='18'&&s[19]!='19'&&s[20]!='20'&&s[21]!='21'&&s[22]!='22'&&s[23]!='23'&&s[24]!='24'&&s[25]!='25')
		return 0;
	else
		return -1;
}

void board()
{
	system ("cls");
	if(mode==1)
	{
	printf("\n");
 	printf("\n");
  	printf(" ,--------. ,--.  ,-----.     ,--------.   ,---.    ,-----.     ,--------.  ,-----.  ,------.  \n");
   	printf(" '--.  .--' |  | '  .--./     '--.  .--'  /  O  \\  '  .--./     '--.  .--' '  .-.  ' |  .---'  \n");
  	printf("    |  |    |  | |  |            |  |    |  .-.  | |  |            |  |    |  | |  | |  `--,   \n");
  	printf("    |  |    |  | '  '--'\\        |  |    |  | |  | '  '--'\\        |  |    '  '-'  ' |  `---.  \n");
  	printf("    `--'    `--'  `-----'        `--'    `--' `--'  `-----'        `--'     `-----'  `------'  \n");
  	printf("\n");
  	printf("\n");
	printf("\t\t\t\t\tComputer=X - %s=O\n\n\n",p2);
	}
	else
	printf("\t\t\t\t\t%s=X - %s=O\n\n\n",p1,p2);
	printf("  ---------------------"); //menampilkan pembatas
    printf("\n  | %c | %c | %c | %c | %c | \n", s[1], s[2], s[3], s[4], s[5]);
  	printf("  ---------------------"); //menampilkan pembatas
    printf("\n  | %c | %c | %c | %c | %c | \n", s[6], s[7], s[8], s[9], s[10]);
    printf("  ---------------------"); //menampilkan pembatas
    printf("\n  | %c | %c | %c | %c | %c | \n", s[1], s[12], s[13],s[14], s[15]);
    printf("  ---------------------");
    printf("\n  | %c | %c | %c | %c | %c | \n", s[16], s[17], s[18],s[19], s[20]);
    printf("  ---------------------"); //menampilkan pembatas
    printf("\n  | %c | %c | %c | %c | %c | \n", s[21], s[22], s[23],s[24], s[25]);
    printf("  ---------------------"); //menampilkan pembatas

}

int computer()
{
	int r,pr=0;
	if(s[1]==s[2]&&s[2]==s[3]&&s[3]==s[4]&&s[4]=='X'&&s[5]=='5')
	{
		pr++;
		return 5;
	}
	if(s[1]==s[2]&&s[2]==s[3]&&s[3]==s[5]&&s[5]=='X'&&s[4]=='4') 
	{
		pr++;
		return 4;
	}
	if(s[1]==s[2]&&s[2]==s[5]&&s[5]==s[4]&&s[4]=='X'&&s[3]=='3')
	{
		pr++;
		return 3;
	}														
	if(s[1]==s[5]&&s[5]==s[4]&&s[4]==s[3]&&s[3]=='X'&&s[2]=='2')
	{
		pr++;
		return 2;
	}
	if(s[5]==s[4]&&s[4]==s[3]&&s[3]==s[2]&&s[2]=='X'&&s[1]=='1')
	{
		pr++;
		return 1;													//baris ke 1
	}
	if(s[6]==s[7]&&s[7]==s[8]&&s[8]==s[9]&&s[9]=='X'&&s[10]=='10')
	{
		pr++;
		return 10;
	}
	if(s[6]==s[7]&&s[7]==s[8]&&s[8]==s[10]&&s[10]=='X'&&s[9]=='9')
	{
		pr++;
		return 9;
	}
	if(s[6]==s[7]&&s[7]==s[10]&&s[10]==s[9]&&s[9]=='X'&&s[8]=='8')
	{
		pr++;
		return 8;
	}
	if(s[6]==s[10]&&s[10]==s[9]&&s[9]==s[8]&&s[8]=='X'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[10]==s[9]&&s[9]==s[8]&&s[8]==s[7]&&s[7]=='X'&&s[8]=='6')
	{
		pr++;
		return 6;
	}																//baris ke 2
	if(s[11]==s[12]&&s[12]==s[13]&&s[13]==s[14]&&s[14]=='X'&&s[15]=='15')
	{
		pr++;
		return 15;
	}
	if(s[11]==s[12]&&s[12]==s[13]&&s[13]==s[15]&&s[15]=='X'&&s[14]=='14')
	{
		pr++;
		return 14;
	}
	if(s[11]==s[12]&&s[12]==s[15]&&s[15]==s[14]&&s[14]=='X'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[11]==s[15]&&s[15]==s[14]&&s[14]==s[13]&&s[13]=='X'&&s[12]=='12')
	{
		pr++;
		return 12;
	}
	if(s[15]==s[14]&&s[14]==s[13]&&s[13]==s[12]&&s[12]=='X'&&s[11]=='11')
	{
		pr++;
		return 11;
	}																	//baris ke 3
	if(s[16]==s[17]&&s[17]==s[18]&&s[18]==s[19]&&s[19]=='X'&&s[20]=='20')
	{
		pr++;
		return 20;
	}
	if(s[16]==s[17]&&s[17]==s[18]&&s[18]==s[20]&&s[20]=='X'&&s[19]=='19')
	{
		pr++;
		return 19;
	}
	if(s[16]==s[17]&&s[17]==s[20]&&s[20]==s[19]&&s[19]=='X'&&s[18]=='18')
	{
		pr++;
		return 18;
	}
	if(s[16]==s[20]&&s[20]==s[19]&&s[19]==s[18]&&s[18]=='X'&&s[17]=='17')
	{
		pr++;
		return 17;
	}
	if(s[20]==s[19]&&s[19]==s[18]&&s[18]==s[17]&&s[17]=='X'&&s[18]=='16')
	{
		pr++;
		return 16;
	}																	//baris ke 4
	if(s[21]==s[22]&&s[22]==s[23]&&s[23]==s[24]&&s[24]=='X'&&s[25]=='25')
	{
		pr++;
		return 25;
	}
	if(s[21]==s[22]&&s[22]==s[23]&&s[23]==s[25]&&s[25]=='X'&&s[24]=='24')
	{
		pr++;
		return 24;
	}
	if(s[21]==s[22]&&s[22]==s[25]&&s[25]==s[24]&&s[24]=='X'&&s[23]=='23')
	{
		pr++;
		return 23;
	}
	if(s[21]==s[25]&&s[25]==s[24]&&s[24]==s[23]&&s[23]=='X'&&s[22]=='22')
	{
		pr++;
		return 22;
	}
	if(s[25]==s[24]&&s[24]==s[23]&&s[23]==s[22]&&s[22]=='X'&&s[21]=='21')
	{
		pr++;
		return 21;
	}																	//baris ke 5
	if(s[1]==s[6]&&s[6]==s[11]&&s[11]==s[16]&&s[16]=='X'&&s[21]=='21')
	{
		pr++;
		return 21;
	}
	if(s[1]==s[6]&&s[6]==s[11]&&s[11]==s[21]&&s[21]=='X'&&s[16]=='16')
	{
		pr++;
		return 16;
	}
	if(s[1]==s[6]&&s[6]==s[21]&&s[21]==s[16]&&s[16]=='X'&&s[11]=='11')
	{
		pr++;
		return 11;
	}
	if(s[1]==s[21]&&s[21]==s[16]&&s[16]==s[11]&&s[11]=='X'&&s[6]=='6')
	{
		pr++;
		return 6;
	}
	if(s[21]==s[16]&&s[16]==s[11]&&s[11]==s[6]&&s[6]=='X'&&s[1]=='1')
	{
		pr++;
		return 1;
	}																	//kolom 1
	if(s[2]==s[7]&&s[7]==s[12]&&s[12]==s[17]&&s[17]=='X'&&s[22]=='22')
	{
		pr++;
		return 22;
	}
	if(s[2]==s[7]&&s[7]==s[12]&&s[12]==s[22]&&s[22]=='X'&&s[17]=='17')
	{
		pr++;
		return 17;
	}
	if(s[2]==s[7]&&s[7]==s[22]&&s[22]==s[17]&&s[17]=='X'&&s[12]=='12')
	{
		pr++;
		return 12;
	}
	if(s[2]==s[22]&&s[22]==s[17]&&s[17]==s[12]&&s[12]=='X'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[22]==s[17]&&s[17]==s[12]&&s[12]==s[7]&&s[7]=='X'&&s[2]=='2')
	{
		pr++;
		return 2;
	}																//kolom 2
	if(s[3]==s[8]&&s[8]==s[13]&&s[13]==s[18]&&s[18]=='X'&&s[23]=='23')
	{
		pr++;
		return 23;
	}
	if(s[3]==s[8]&&s[8]==s[18]&&s[18]==s[23]&&s[23]=='X'&&s[18]=='18')
	{
		pr++;
		return 18;
	}
	if(s[3]==s[8]&&s[8]==s[23]&&s[23]==s[18]&&s[18]=='X'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[3]==s[23]&&s[23]==s[18]&&s[18]==s[13]&&s[13]=='X'&&s[8]=='8')
	{
		pr++;
		return 8;
	}
	if(s[23]==s[18]&&s[18]==s[13]&&s[13]==s[8]&&s[8]=='X'&&s[3]=='3')
	{
		pr++;
		return 3;
	}																//kolom 3
	if(s[4]==s[9]&&s[9]==s[14]&&s[14]==s[19]&&s[19]=='X'&&s[24]=='24')
	{
		pr++;
		return 24;
	}
	if(s[4]==s[9]&&s[9]==s[19]&&s[19]==s[24]&&s[24]=='X'&&s[19]=='19')
	{
		pr++;
		return 19;
	}
	if(s[4]==s[9]&&s[9]==s[24]&&s[24]==s[19]&&s[19]=='X'&&s[14]=='14')
	{
		pr++;
		return 14;
	}
	if(s[4]==s[24]&&s[24]==s[19]&&s[19]==s[14]&&s[14]=='X'&&s[9]=='9')
	{
		pr++;
		return 9;
	}
	if(s[24]==s[19]&&s[19]==s[14]&&s[14]==s[9]&&s[9]=='X'&&s[4]=='4')
	{
		pr++;
		return 4;
	}																//kolom 4
	if(s[5]==s[10]&&s[10]==s[15]&&s[15]==s[20]&&s[20]=='X'&&s[25]=='25')
	{
		pr++;
		return 25;
	}
	if(s[5]==s[10]&&s[10]==s[20]&&s[20]==s[25]&&s[25]=='X'&&s[20]=='20')
	{
		pr++;
		return 20;
	}
	if(s[5]==s[10]&&s[10]==s[25]&&s[25]==s[20]&&s[20]=='X'&&s[15]=='15')
	{
		pr++;
		return 15;
	}
	if(s[5]==s[25]&&s[25]==s[20]&&s[20]==s[15]&&s[15]=='X'&&s[10]=='10')
	{
		pr++;
		return 10;
	}
	if(s[25]==s[20]&&s[20]==s[15]&&s[15]==s[10]&&s[10]=='X'&&s[5]=='5')
	{
		pr++;
		return 5;
	}																//kolom 5
	if(s[1]==s[7]&&s[7]==s[13]&&s[13]==s[19]&&s[19]=='X'&&s[25]=='25')
	{
		pr++;
		return 25;
	}
	if(s[1]==s[7]&&s[7]==s[13]&&s[13]==s[25]&&s[25]=='X'&&s[19]=='19')
	{
		pr++;
		return 19;
	}
	if(s[1]==s[7]&&s[7]==s[25]&&s[25]==s[19]&&s[19]=='X'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[1]==s[25]&&s[25]==s[19]&&s[19]==s[13]&&s[13]=='X'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[25]==s[19]&&s[19]==s[13]&&s[13]==s[7]&&s[7]=='X'&&s[1]=='1')
	{
		pr++;
		return 1;
	}																//diagonal kanan
	if(s[5]==s[9]&&s[9]==s[13]&&s[13]==s[17]&&s[17]=='X'&&s[21]=='21')
	{
		pr++;
		return 21;
	}
	if(s[5]==s[9]&&s[9]==s[13]&&s[13]==s[21]&&s[21]=='X'&&s[17]=='17')
	{
		pr++;
		return 17;
	}
	if(s[5]==s[9]&&s[9]==s[21]&&s[21]==s[17]&&s[17]=='X'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[5]==s[21]&&s[21]==s[17]&&s[17]==s[13]&&s[13]=='X'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[21]==s[17]&&s[17]==s[13]&&s[13]==s[7]&&s[7]=='X'&&s[1]=='1')
	{
		pr++;
		return 1;
	}																//diagonal kiri
	if(s[1]==s[2]&&s[2]==s[3]&&s[3]==s[4]&&s[4]=='O'&&s[5]=='5')
	{
		pr++;
		return 5;
	}
	if(s[1]==s[2]&&s[2]==s[3]&&s[3]==s[5]&&s[5]=='O'&&s[4]=='4') 
	{
		pr++;
		return 4;
	}
	if(s[1]==s[2]&&s[2]==s[5]&&s[5]==s[4]&&s[4]=='O'&&s[3]=='3')
	{
		pr++;
		return 3;
	}														
	if(s[1]==s[5]&&s[5]==s[4]&&s[4]==s[3]&&s[3]=='O'&&s[2]=='2')
	{
		pr++;
		return 2;
	}
	if(s[5]==s[4]&&s[4]==s[3]&&s[3]==s[2]&&s[2]=='O'&&s[1]=='1')
	{
		pr++;
		return 1;													//baris ke 1 'O'
	}
	if(s[6]==s[7]&&s[7]==s[8]&&s[8]==s[9]&&s[9]=='O'&&s[10]=='10')
	{
		pr++;
		return 10;
	}
	if(s[6]==s[7]&&s[7]==s[8]&&s[8]==s[10]&&s[10]=='O'&&s[9]=='9')
	{
		pr++;
		return 9;
	}
	if(s[6]==s[7]&&s[7]==s[10]&&s[10]==s[9]&&s[9]=='O'&&s[8]=='8')
	{
		pr++;
		return 8;
	}
	if(s[6]==s[10]&&s[10]==s[9]&&s[9]==s[8]&&s[8]=='O'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[10]==s[9]&&s[9]==s[8]&&s[8]==s[7]&&s[7]=='O'&&s[8]=='6')
	{
		pr++;
		return 6;
	}																//baris ke 2
	if(s[11]==s[12]&&s[12]==s[13]&&s[13]==s[14]&&s[14]=='O'&&s[15]=='15')
	{
		pr++;
		return 15;
	}
	if(s[11]==s[12]&&s[12]==s[13]&&s[13]==s[15]&&s[15]=='O'&&s[14]=='14')
	{
		pr++;
		return 14;
	}
	if(s[11]==s[12]&&s[12]==s[15]&&s[15]==s[14]&&s[14]=='O'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[11]==s[15]&&s[15]==s[14]&&s[14]==s[13]&&s[13]=='O'&&s[12]=='12')
	{
		pr++;
		return 12;
	}
	if(s[15]==s[14]&&s[14]==s[13]&&s[13]==s[12]&&s[12]=='O'&&s[11]=='11')
	{
		pr++;
		return 11;
	}																	//baris ke 3
	if(s[16]==s[17]&&s[17]==s[18]&&s[18]==s[19]&&s[19]=='O'&&s[20]=='20')
	{
		pr++;
		return 20;
	}
	if(s[16]==s[17]&&s[17]==s[18]&&s[18]==s[20]&&s[20]=='O'&&s[19]=='19')
	{
		pr++;
		return 19;
	}
	if(s[16]==s[17]&&s[17]==s[20]&&s[20]==s[19]&&s[19]=='O'&&s[18]=='18')
	{
		pr++;
		return 18;
	}
	if(s[16]==s[20]&&s[20]==s[19]&&s[19]==s[18]&&s[18]=='O'&&s[17]=='17')
	{
		pr++;
		return 17;
	}
	if(s[20]==s[19]&&s[19]==s[18]&&s[18]==s[17]&&s[17]=='O'&&s[16]=='16')
	{
		pr++;
		return 16;
	}																	//baris ke 4
	if(s[21]==s[22]&&s[22]==s[23]&&s[23]==s[24]&&s[24]=='O'&&s[25]=='25')
	{
		pr++;
		return 25;
	}
	if(s[21]==s[22]&&s[22]==s[23]&&s[23]==s[25]&&s[25]=='O'&&s[24]=='24')
	{
		pr++;
		return 24;
	}
	if(s[21]==s[22]&&s[22]==s[25]&&s[25]==s[24]&&s[24]=='O'&&s[23]=='23')
	{
		pr++;
		return 23;
	}
	if(s[21]==s[25]&&s[25]==s[24]&&s[24]==s[23]&&s[23]=='O'&&s[22]=='22')
	{
		pr++;
		return 22;
	}
	if(s[25]==s[24]&&s[24]==s[23]&&s[23]==s[22]&&s[22]=='O'&&s[21]=='21')
	{
		pr++;
		return 21;
	}																	//baris ke 5
	if(s[1]==s[6]&&s[6]==s[11]&&s[11]==s[16]&&s[16]=='O'&&s[21]=='21')
	{
		pr++;
		return 21;
	}
	if(s[1]==s[6]&&s[6]==s[11]&&s[11]==s[21]&&s[21]=='O'&&s[16]=='16')
	{
		pr++;
		return 16;
	}
	if(s[1]==s[6]&&s[6]==s[21]&&s[21]==s[16]&&s[16]=='O'&&s[11]=='11')
	{
		pr++;
		return 11;
	}
	if(s[1]==s[21]&&s[21]==s[16]&&s[16]==s[11]&&s[11]=='O'&&s[6]=='6')
	{
		pr++;
		return 6;
	}
	if(s[21]==s[16]&&s[16]==s[11]&&s[11]==s[6]&&s[6]=='O'&&s[1]=='1')
	{
		pr++;
		return 1;
	}																	//kolom 1
	if(s[2]==s[7]&&s[7]==s[12]&&s[12]==s[17]&&s[17]=='O'&&s[22]=='22')
	{
		pr++;
		return 22;
	}
	if(s[2]==s[7]&&s[7]==s[12]&&s[12]==s[22]&&s[22]=='O'&&s[17]=='17')
	{
		pr++;
		return 17;
	}
	if(s[2]==s[7]&&s[7]==s[22]&&s[22]==s[17]&&s[17]=='O'&&s[12]=='12')
	{
		pr++;
		return 12;
	}
	if(s[2]==s[22]&&s[22]==s[17]&&s[17]==s[12]&&s[12]=='O'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[22]==s[17]&&s[17]==s[12]&&s[12]==s[7]&&s[7]=='O'&&s[2]=='2')
	{
		pr++;
		return 2;
	}																//kolom 2
	if(s[3]==s[8]&&s[8]==s[13]&&s[13]==s[18]&&s[18]=='O'&&s[23]=='23')
	{
		pr++;
		return 23;
	}
	if(s[3]==s[8]&&s[8]==s[18]&&s[18]==s[23]&&s[23]=='O'&&s[18]=='18')
	{
		pr++;
		return 18;
	}
	if(s[3]==s[8]&&s[8]==s[23]&&s[23]==s[18]&&s[18]=='O'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[3]==s[23]&&s[23]==s[18]&&s[18]==s[13]&&s[13]=='O'&&s[8]=='8')
	{
		pr++;
		return 8;
	}
	if(s[23]==s[18]&&s[18]==s[13]&&s[13]==s[8]&&s[8]=='O'&&s[3]=='3')
	{
		pr++;
		return 3;
	}																//kolom 3
	if(s[4]==s[9]&&s[9]==s[14]&&s[14]==s[19]&&s[19]=='O'&&s[24]=='24')
	{
		pr++;
		return 24;
	}
	if(s[4]==s[9]&&s[9]==s[19]&&s[19]==s[24]&&s[24]=='O'&&s[19]=='19')
	{
		pr++;
		return 19;
	}
	if(s[4]==s[9]&&s[9]==s[24]&&s[24]==s[19]&&s[19]=='O'&&s[14]=='14')
	{
		pr++;
		return 14;
	}
	if(s[4]==s[24]&&s[24]==s[19]&&s[19]==s[14]&&s[14]=='O'&&s[9]=='9')
	{
		pr++;
		return 9;
	}
	if(s[24]==s[19]&&s[19]==s[14]&&s[14]==s[9]&&s[9]=='O'&&s[4]=='4')
	{
		pr++;
		return 4;
	}																//kolom 4
	if(s[5]==s[10]&&s[10]==s[15]&&s[15]==s[20]&&s[20]=='O'&&s[25]=='25')
	{
		pr++;
		return 25;
	}
	if(s[5]==s[10]&&s[10]==s[20]&&s[20]==s[25]&&s[25]=='O'&&s[20]=='20')
	{
		pr++;
		return 20;
	}
	if(s[5]==s[10]&&s[10]==s[25]&&s[25]==s[20]&&s[20]=='O'&&s[15]=='15')
	{
		pr++;
		return 15;
	}
	if(s[5]==s[25]&&s[25]==s[20]&&s[20]==s[15]&&s[15]=='O'&&s[10]=='10')
	{
		pr++;
		return 10;
	}
	if(s[25]==s[20]&&s[20]==s[15]&&s[15]==s[10]&&s[10]=='O'&&s[5]=='5')
	{
		pr++;
		return 5;
	}																//kolom 5
	if(s[1]==s[7]&&s[7]==s[13]&&s[13]==s[19]&&s[19]=='O'&&s[25]=='25')
	{
		pr++;
		return 25;
	}
	if(s[1]==s[7]&&s[7]==s[13]&&s[13]==s[25]&&s[25]=='O'&&s[19]=='19')
	{
		pr++;
		return 19;
	}
	if(s[1]==s[7]&&s[7]==s[25]&&s[25]==s[19]&&s[19]=='O'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[1]==s[25]&&s[25]==s[19]&&s[19]==s[13]&&s[13]=='O'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[25]==s[19]&&s[19]==s[13]&&s[13]==s[7]&&s[7]=='O'&&s[1]=='1')
	{
		pr++;
		return 1;
	}																//diagonal kanan
	if(s[5]==s[9]&&s[9]==s[13]&&s[13]==s[17]&&s[17]=='O'&&s[21]=='21')
	{
		pr++;
		return 21;
	}
	if(s[5]==s[9]&&s[9]==s[13]&&s[13]==s[21]&&s[21]=='O'&&s[17]=='17')
	{
		pr++;
		return 17;
	}
	if(s[5]==s[9]&&s[9]==s[21]&&s[21]==s[17]&&s[17]=='O'&&s[13]=='13')
	{
		pr++;
		return 13;
	}
	if(s[5]==s[21]&&s[21]==s[17]&&s[17]==s[13]&&s[13]=='O'&&s[7]=='7')
	{
		pr++;
		return 7;
	}
	if(s[21]==s[17]&&s[17]==s[13]&&s[13]==s[7]&&s[7]=='O'&&s[1]=='1')
	{
		pr++;
		return 1;
	}																//diagonal kiri
	if(pr==0)
	{
		if(move==0)
		{
			r=p2[0]+p2[1]+p2[2]+p2[3]+p2[4]+p2[5];
			r=r%7;
			if(r%2==0)
			{
				mm=7;
				pr++;
				return 7;
			}
			else
			{
				mm=7;
				pr++;
				return 7;
			}
		}
		if(move==2)
		{
			if(mm==7)
			{
				if(pm%2==0)
				{
					cnt=1;
					pr++;
					if(pm==3)
						return 21;
					if(pm==11)
						return 25;
					if(pm==15)
						return 1;
					if(pm==23)
						return 5;
					
				}
				else
				{
					pr++;
					if(pm==1)
					{
						cnt=2;
						return 25;
					}
					if(pm==5)
					{
						cnt=3;
						return 21;
					}
					if(pm==21)
					{
						cnt=4;
						return 5;
					}
					if(pm==25)
					{
						cnt=5;
						return 1;
					}
				}
			}
			else
			{
				if(pm==13)
				{
					pr++;
					cnt=15;
					return 25;
				}
				else if(pm%2!=0)
				{
					if(pm==25)
					{
						pr++;
						cnt=21;
						return 13;
					}
					else if(pm==5||pm==21)
					{
						pr++;
						cnt=23;
						return 25;
					}
				}
				else
				{
					pr++;
					cnt=25;
					return 13;
				}
			}
		}
		if(move==4)
		{
			if(cnt==2)
			{
				if(pm==15)
				return 21;
				if(pm==23)
				return 5;
			}
			if(cnt==3)
			{
				if(pm==11)
				return 25;
				if(pm==23)
				return 1;
			}
			if(cnt==4)
			{
				if(pm==3)
				return 11;
				if(pm==11)
				return 3;
			}
			if(cnt==5)
			{
				if(pm==15)
				return 3;
				if(pm==3)
				return 15;
			} // gatau
			if(cnt==7)
			{
				if(pm==4)
				{
					pr++;
					return 3;
				}
				if(pm==2)
				{
					pr++;
					return 7;
				}
			}
			if(cnt==9)
			{
				pr++;
				if(s[2]=='O')
					return 7;
				if(s[4]=='O')
					return 3;
			}
		}
	}
	if(pr==0)
	{
		if(s[1]=='1')
			return 1;
		if(s[2]=='2')
			return 2;
		if(s[3]=='3')
			return 3;
		if(s[4]=='4')
			return 4;
		if(s[5]=='5')
			return 5;
		if(s[6]=='6')
			return 6;
		if(s[7]=='7')
			return 7;
		if(s[8]=='8')
			return 8;
		if(s[9]=='9')
			return 9;
		if(s[10]=='10')
			return 10;
		if(s[11]=='11')
			return 11;
		if(s[12]=='12')
			return 12;
		if(s[13]=='13')
			return 13;
		if(s[14]=='14')
			return 14;
		if(s[15]=='15')
			return 15;
		if(s[16]=='16')
			return 16;
		if(s[17]=='17')
			return 17;
		if(s[18]=='18')
			return 18;
		if(s[19]=='19')
			return 19;
		if(s[20]=='20')
			return 20;
		if(s[21]=='21')
			return 21;
		if(s[22]=='22')
			return 22;
		if(s[23]=='23')
			return 23;
		if(s[24]=='24')
			return 24;
		if(s[25]=='25')
			return 25;
	}
	return 0;
}
