#include <stdio.h>
#include <string.h>
int main(){
	char read[101];
	int count;
	scanf("%s", &read);
	for(count = 0; read[count] != '.'; count++);
	char *type = strtok(read, ".");
	type = strtok(" ", " ");
	if(type == "dib ")	printf("Paint.Picture");
	if(type == "doc ")	printf("Word.Document.8");
	if(type == "docx ")	printf("Word.Document.12");
	if(type == "htm ")	printf("htmfile");
	if(type == "html ")	printf("htmlfile");
	if(type == "hwp ")	printf("Hwp.Document.96");
	if(type == "hwpx ")	printf("Hwp.Document.hwpx.96");
	if(type == "hwt ")	printf("Hwp.Document.hwt.96");
	if(type == "jpe " || type == "jpeg" || type == "jpg")	printf("jpegfile");
	if(type == "ppt ")	printf("PowerPoint.Show.8");
	if(type == "pptx ")	printf("PowerPoint.Show.12");
	if(type == "pptxml ")printf("powerpointxmlfile");
	return 0;
}
