#define T "\x1b["
#define H 1999
#define e printf

int M,a,t,r,i,x                      [H+1]
 ;main(){                           for (a
    =0;a<=                         H;a++)x
   [a]= a <                       80?rand(
   )% 48:0;                      while(1){
   for(M=0;M                    <=H;M ++){ 
   if(M<80){a                  =x[M]=(M[x]
   +1)%48;a<24                ?x[(a+1)*80+
   M]=( rand()&              63)*16|15:0;}
   else  {a=M[x]            &15;t=  a>7?(a
   -8)*   32:0;r=          a<8?(a   <<5) +
   31 :    255;e(T        "38;2"    ";%d;"
   "%d"     ";%dm%c"     ,t,r,      t,32+M
   [x]/      16);M %     80==       79?e(T
   "0m"       "\n"  T   "48;"       "2;0;"
   "32"        ";0m" ):7;a=a        ?a-1:a
   ;M[x         ]=(x[M]&240         )|a;}}
   e( T            "42A");         usleep(
   32 *             H); }}        /*Matrix*/