#include<cstdio>

int main () {
   FILE *fp;
   char str[] = "This is tutorialspoint.com";
   int x = 10;
   fopen_s(&fp, "file.txt", "wb");
   for(int i=0; i<5; i++)
   	fwrite(str , 1 , 16 , fp );
   fwrite(&x , 1 , sizeof(int) , fp );
   fwrite(&x , 1 , sizeof(int) , fp );
   fclose(fp);
  
   return(0);
}