#include <stdio.h>
#include <string.h>

int main(){
	char arr[101] = {0};
	char file[10] = {0};
	int i,j;
	scanf("%s", &arr);
	for(i=0; arr[i] != '.'; i++);
	for(i++,j=0; i<strlen(arr); i++) file[j++] = arr[i];
	
	if(!strcmp(file, "dib")) 	puts("Paint.Picture");
	if(!strcmp(file, "doc")) 	puts("Word.Document.8");
	if(!strcmp(file, "docx")) 	puts("Word.Document.12");
	if(!strcmp(file, "htm")) 	puts("htmfile");
	if(!strcmp(file, "html")) 	puts("htmlfile");
	if(!strcmp(file, "hwp")) 	puts("Hwp.Document.96");
	if(!strcmp(file, "hwpx")) 	puts("Hwp.Document.hwpx.96");
	if(!strcmp(file, "hwt")) 	puts("Hwp.Document.hwt.96");
	if(!strcmp(file, "jpe") ||
	   !strcmp(file, "jpg") ||
	   !strcmp(file, "jpeg")) 	puts("jpegfile");
	if(!strcmp(file, "ppt")) 	puts("PowerPoint.Show.8");
	if(!strcmp(file, "pptx")) 	puts("PowerPoint.Show.12");
	if(!strcmp(file, "pptxml")) puts("powerpointxmlfile");
	return 0;
}
