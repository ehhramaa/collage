#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){
  char name[20]="Muhamad Ramadhan";
  system("cls");
  printf("\t\t\t Welcome %s, Semangat Buat Hari Ini Yah >_< \n \t\t\t\t\t Loading.......", name);
  sleep(3);
  
  system("cls");
  int choise;
  printf("\t <========== All Project C =============>\n\n\n");
  printf("\t 1). Kalkulator\n");
  printf("\t 2). Data\n");
  printf("\t 3). Mahasiswa\n");
  printf("\t 4). Collage Lesson\n\n\n");
  printf("\t Silahkan Pilih Program : ");
  scanf("%i", &choise);
  
  switch(choise){
    case 1:
      kalkulator();
      break;
    case 2:
      data();
      break;
    case 3:
      mahasiswa();
      break;
    case 4:
      collage();
    default:
      printf("\n\t Unregonized Choise\n");
  }
}

void kalkulator(){
  float a,b,c,t;
  int choise,program,bilangan;
  
  system("cls");
  
  printf("\t <========== Kalkulator C =============>\n\n\n");
  printf("\t 1). Pembagian\n");
  printf("\t 2). Perkalian\n");
  printf("\t 3). Perpangkatan\n\n\n");
  printf("\t Silahkan Pilih Program : ");
  scanf("%i", &choise);
  
  switch(choise){
    case 1:
        system("cls");
        printf("\t <========== Program Pembagian =============>\n\n\n");
        printf("\t Berapa Bialangan Yang Akan Dibagi : ");
        scanf("%i", &bilangan);
        if(bilangan == 2){
          printf("\t Masukan Bilangan Yang Akan Di Bagi : ");
          scanf("%f", &a);
          printf("\t %.2f akan di bagi berapa : ", a);
          scanf("%f", &b);
          t=a/b;
          printf("\t Hasil Pembagian : %.2f \n\n\n", t);
          printf("\t Apakah Anda Ingin Mengulang? \n\t 1).Y \n\t 2).T \n\t 3).Exit\n");
          printf("\t Choise : ");
          scanf("%i", &program);
          if(program == 1){
            kalkulator();
          }else if(program == 2){
            printf("\t\n Returning MainHome.....");
            sleep(3);
            main();
          }else{
            printf("\n\t Choise Is Not Regonized.... Returning Kalkulator Menu....");
            sleep(3);
            kalkulator();
          }
        }else if(bilangan == 3){
          printf("\t Masukan Bilangan Pertama : ");
          scanf("%f", &a);
          printf("\t Masukan Bilangan kedua : ");
          scanf("%f", &b);
          printf("\t Masukan Bilangan Ketiga : ");
          scanf("%f", &c);
          t=a/b/c;
          printf("\t Hasil Pembagian : %.2f \n\n\n", t);
          printf("\t Apakah Anda Ingin Mengulang? \n\t 1).Y \n\t 2).T \n\t 3).Exit\n");
          printf("\t Choise : ");
          scanf("%i", &program);
          if(program == 1){
            kalkulator();
          }else if(program == 2){
            printf("\t\n Returning MainHome.....");
            sleep(3);
            main();
          }else{
            printf("\n\t Choise Is Not Regonized.... Returning Kalkulator Menu....");
            sleep(3);
            kalkulator();
          }
        }else{
          printf("\n\t Choise Is Not Regonized.... Returning Kalkulator Menu....");
          sleep(3);
          kalkulator();
        }
      break;
    case 2:
        system("cls");
        printf("\t <========== Program Perkalian =============>\n\n\n");
        printf("\t Masukan Bilangan Yang Akan Di Kali : ");
        scanf("%f", &a);
        printf("\t %.2f akan di kali berapa : ", a);
        scanf("%f", &b);
        t=a*b;
        printf("\t Hasil Perkalian : %.2f \n\n\n", t);
          printf("\t Apakah Anda Ingin Mengulang? \n\t 1).Y \n\t 2).T \n\t 3).Exit\n");
          printf("\t Choise : ");
          scanf("%i", &program);
          if(program == 1){
            kalkulator();
          }else if(program == 2){
            printf("\t\n Returning MainHome.....");
            sleep(3);
            main();
          }else{
            printf("\n\t Choise Is Not Regonized.... Returning Kalkulator Menu....");
            sleep(3);
            kalkulator();
          }
      break;
    case 3:
        system("cls");
        printf("\t <========== Program Perpangkatan =============>\n\n\n");
        printf("\t Cannot Setup...............");
        sleep(3);
        main();
      break;
    
    
  }
}

void data(){
  printf("\t Cannot Setup...............");
  sleep(3);
  main();
}

void mahasiswa(){
  printf("\t Cannot Setup...........");
  sleep(3);
  main();
}

void collage(){
	int a,b;
	/*
	int nilai=65;
	*/
	
	system("cls");
	printf("\t <=============== Collage Lesson ==============>\n");
	printf("\t\t Semangat Ngampussnya Kamuuuu ^v^\n\n\n");
  	sleep(2);
  	
  	printf("\n\t Masukan Nilai A : ");
  	scanf("%i", &a);
  	printf("\n\t Masukan Nilai B : ");
  	scanf("%i", &b);
  	
  	if(a>b){
  		printf("\n\t Nilai A Terbesar : %i", a);
	  }else if(b>a){
	  	printf("\n\t Nilai B Terbesar : %i", b);
	  }else{
	  	printf("\n\t Nilai Sama Besar %i, %i", a,b);
	  }
  	
  	
	/*
	printf("\n\t Masukan Nilai Mahasiswa : ");
	scanf("%i", &a);
	
	
	/*
	if(a %2 == 0){
		printf("\n\t Even");
	}else{
		printf("\n\t Odd");
	}
	
	printf("\n\t Program Selesai !!!");
	
	
	if(a >= nilai){
		printf("\n\t Nilai Anda : %i", a);
		printf("\n\t Selamat Anda Lulus");
	}else{
		printf("\n\t Nilai Anda : %i", a);
		printf("\n\t Maaf... Nilai Anda Belum Mencukupi Untuk Lulus");
	}
	printf("\n\t Terimakasih Sudah Menjalani Program ^^ ");
	
	/*
	printf("\n\t Masukan Angka B : ");
	scanf("%i", &b);
	if(a+=4 > b+1){
		printf("Besar");
	}else{
		printf("Kecil");
	}
	printf("\n%i", a);
	printf("\n%i", b);
	
	/*
	if(a<b){
		printf("\n\t Jakarta");
	}else{
		printf("\n\t Bandung");
	}
	printf("\n\t Selesai");
	*/
	printf("\n\n\n\t Returning Collage Menu.................");
	sleep(2);
	collage();
}
