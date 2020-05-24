%{
int yylex();
void yyerror(const char *ch);     
#include<stdio.h> 
#include<math.h>
extern FILE *yyin;
%}
%union{
float real;
}
%token <real> NUMBER 
%token to cm m tonne ft inch pound km g kg of deg rad pascal bar msec kmhr s min hr joule cal
%type <real> S E Z Y U V X M N O P F G H I J K L Q R T W
%%
S: E    {$$=$1;};   

E: m to Z   {$$=$3;};
    |cm to Y   {$$=$3;};
    |km to X   {$$=$3;};
    |ft to U   {$$=$3;};
    |inch to V   {$$=$3;};
    |tonne to M   {$$=$3;};
    |pound to N   {$$=$3;};
    |kg to O   {$$=$3;};
    |g to P   {$$=$3;};
    |deg to Q   {$$=$3;};
    |rad to R   {$$=$3;};
    |pascal to T   {$$=$3;};
    |bar to W   {$$=$3;};
    |msec to L   {$$=$3;};
    |kmhr to K   {$$=$3;};
    |s to J   {$$=$3;};
    |min to I   {$$=$3;};
    |hr to H   {$$=$3;};
    |joule to G   {$$=$3;};
    |cal to F   {$$=$3;};
    ;

Z: km of NUMBER         {   $$=$3/1000;    printf("%f m to km is %f km\n",$3,$$); };
    |cm of NUMBER       {   $$=$3*100;     printf("%f m to cm is %f cm\n",$3,$$); };
    |inch of NUMBER     {   $$=$3*39.37; printf("%f m to inch is %f inches\n",$3,$$); };
    |ft of NUMBER       {   $$=$3*3.281;  printf("%f m to ft is %f ft\n",$3,$$); };
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};    
    ;

Y: km of NUMBER         {   $$=$3/100000;    printf("%f cm to km is %f km\n",$3,$$); };
    |m of NUMBER       {   $$=$3/100;     printf("%f cm to m is %f m\n",$3,$$); };
    |inch of NUMBER     {   $$=$3/2.54; printf("%f cm to inch is %f inches\n",$3,$$); };
    |ft of NUMBER       {   $$=$3/30.48;  printf("%f cm to ft is %f ft\n",$3,$$); };
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    ;

X: cm of NUMBER         {   $$=$3*100000;    printf("%f km to cm is %f cm\n",$3,$$); };
    |m of NUMBER       {   $$=$3*1000;     printf("%f km to m is %f m\n",$3,$$); };
    |inch of NUMBER     {   $$=$3*39370; printf("%f km to inch is %f inches\n",$3,$$); };
    |ft of NUMBER       {   $$=$3*3281;  printf("%f km to ft is %f ft\n",$3,$$); };
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    ;   

U: cm of NUMBER         {   $$=$3*30.48;    printf("%f ft to cm is %f cm\n",$3,$$); };
    |m of NUMBER       {   $$=$3/3.281;     printf("%f ft to m is %f m\n",$3,$$); };
    |inch of NUMBER     {   $$=$3*12; printf("%f ft to inch is %f inches\n",$3,$$); };
    |km of NUMBER       {   $$=$3/3281;  printf("%f ft to km is %f km\n",$3,$$); };
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    ;

V: cm of NUMBER         {   $$=$3*2.54;    printf("%f inch to cm is %f cm\n",$3,$$); };
    |m of NUMBER       {   $$=$3/39.37;     printf("%f inch to m is %f m\n",$3,$$); };
    |ft of NUMBER     {   $$=$3/12; printf("%f inch to ft is %f ft\n",$3,$$); };
    |km of NUMBER       {   $$=$3/39370;  printf("%f inch to km is %f km\n",$3,$$); };
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    ;

G:cal of NUMBER      {   $$=$3*0.2389;    printf("%f joule to cal is %f cal\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;   

F:joule of NUMBER      {   $$=$3*4.184;    printf("%f cal to joule is %f joule\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;   


I:s of NUMBER      {   $$=$3*60;    printf("%f min to s is %f s\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    {  $$=$3/60;    printf("%f min to hr is %f hr\n",$3,$$);};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    ;

H:min of NUMBER      {   $$=$3*60;    printf("%f hr to min is %f min\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    {  $$=$3*3600;    printf("%f hr to s is %f s\n",$3,$$);};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    ;


J:min of NUMBER      {   $$=$3/60;    printf("%f s to min is %f min\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    {  $$=$3/3600;    printf("%f s to hr is %f hr\n",$3,$$);};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    ;

L:kmhr of NUMBER      {   $$=$3*3.6;    printf("%f msec to kmhr is %f kmhr\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;

K:msec of NUMBER      {   $$=$3/3.6;    printf("%f kmhr to msec is %f msec\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;

W:pascal of NUMBER      {   $$=$3*100000;    printf("%f bar to pascal is %f pascal\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;

T:bar of NUMBER      {   $$=$3/100000;    printf("%f pascal to bar is %f bar\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;

Q:rad of NUMBER      {   $$=$3*0.01745;    printf("%f deg to rad is %f rad\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;   

R:deg of NUMBER      {   $$=$3*57.296;    printf("%f rad to deg is %f deg\n",$3,$$); }; 
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kg of NUMBER    { printf("Invalid Conversion\n");};
    |g of NUMBER    { printf("Invalid Conversion\n");};
    |tonne of NUMBER    { printf("Invalid Conversion\n");};
    |pound of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;

M: pound of NUMBER      {   $$=$3*2205;    printf("%f tonne to pound is %f pound\n",$3,$$); };
    |kg of NUMBER       {   $$=$3*1000;     printf("%f tonne to kg is %f kg\n",$3,$$); };
    |g of NUMBER        {   $$=$3*1000000; printf("%f tonne to g is %f g\n",$3,$$); };
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;

N: tonne of NUMBER      {   $$=$3/2205;    printf("%f pound to tonne is %f tonne\n",$3,$$); };
    |kg of NUMBER       {   $$=$3/2.205;     printf("%f pound to kg is %f kg\n",$3,$$); };
    |g of NUMBER        {   $$=$3*454; printf("%f pound to g is %f g\n",$3,$$); };
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    ;

O: tonne of NUMBER      {   $$=$3/1000;    printf("%f kg to tonne is %f tonne\n",$3,$$); };
    |pound of NUMBER       {   $$=$3*2.205;     printf("%f kg to pound is %f pound\n",$3,$$); };
    |g of NUMBER        {   $$=$3*1000; printf("%f kg to g is %f g\n",$3,$$); };
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    ;

P: tonne of NUMBER      {   $$=$3/1000000;    printf("%f g to tonne is %f tonne\n",$3,$$); };
    |pound of NUMBER       {   $$=$3/454;     printf("%f g to pound is %f pound\n",$3,$$); };
    |kg of NUMBER        {   $$=$3/1000; printf("%f g to kg is %f kg\n",$3,$$); };
    |km of NUMBER    { printf("Invalid Conversion\n");};
    |m of NUMBER    { printf("Invalid Conversion\n");};
    |cm of NUMBER    { printf("Invalid Conversion\n");};
    |inch of NUMBER    { printf("Invalid Conversion\n");};
    |ft of NUMBER    { printf("Invalid Conversion\n");};
    |kmhr of NUMBER    { printf("Invalid Conversion\n");};
    |msec of NUMBER    { printf("Invalid Conversion\n");};
    |hr of NUMBER    { printf("Invalid Conversion\n");};
    |min of NUMBER    { printf("Invalid Conversion\n");};
    |s of NUMBER    { printf("Invalid Conversion\n");};
    |pascal of NUMBER    { printf("Invalid Conversion\n");};
    |bar of NUMBER    { printf("Invalid Conversion\n");};
    |joule of NUMBER    { printf("Invalid Conversion\n");};
    |cal of NUMBER    { printf("Invalid Conversion\n");};
    |deg of NUMBER    { printf("Invalid Conversion\n");};
    |rad of NUMBER    { printf("Invalid Conversion\n");};
    ;
%%
void yyerror(const char *ch){
}
int main(int argc, char *argv[]) 
{
yyin=fopen(argv[1],"r");
int i;
for(i=1;i<=50;i++){
yyparse();
}
fclose(yyin);
return 0;
}