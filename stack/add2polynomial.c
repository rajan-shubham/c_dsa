#include<stdio.h>
struct Polynomial{
int coeff,exp;};
struct Polynomial first[15],second[15],result[15];
void display(struct Polynomial poly[],int terms){
	printf("\n");
	for(int i=0;i<terms;i++){
		printf("%dX^%d+ ",poly[i],poly[i].exp);}
	}
int readExpression(struct Polynomial poly[]){
	int terms,i;
	printf("\nNumbers of terms: ");
	scanf("%d",&terms);
	printf("\nEnter the coeffecients and exponents in DESCENDING order");
	for(i=0;i<terms;i++){
		printf("\nCoeffecient :");
		scanf("%d",&poly[i].coeff);
		printf("Exponent :");
		scanf("%d",&poly[i].exp);}
	return terms;}
int addExpressions(int firstcount,int secondcount){
	int i=0,j=0,k=0;
	while(i<firstcount && j<secondcount){
		if(first[i].exp == second[j].exp){
			result[k].coeff = first[i].coeff + second[j].coeff;
			result[k].exp = first[i].exp;
			i++;j++;k++;
			}
		else if(first[i].exp > second[j].exp){
			result[k].coeff = first[i].coeff;
			result[k].exp = first[i].exp;
			i++;k++;}
		else{
			result[k].coeff = second[i].coeff;
			result[k].exp = second[j].exp;
			j++;k++;}
		}
	while(i<firstcount){
		result[k].coeff = first[i].coeff;
		result[k].exp = first[i].exp;
		k++;i++;
		}
	while(j<secondcount){
		result[k].coeff = second[j].coeff;
		result[k].exp = second[j].exp;
		k++;j++;
		}
	return k;}
void main(){
	int firstcount,secondcount,resultcount;
	printf("\nFirst Expression:\n");
	firstcount = readExpression(first);
	printf("\nSecond Expression:\n");
	secondcount = readExpression(second);
	printf("\nFirst Expression\n");
	display(first,firstcount);
	printf("\nSecond Expression\n");
	display(second,secondcount);
	resultcount = addExpressions(firstcount,secondcount);
	printf("\n\nResultant Expression\n");
	display(result,resultcount);
	}
