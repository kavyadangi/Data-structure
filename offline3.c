#include<stdio.h>
struct student{
    int sap;
    char*name;

}*s1;  //globlly defined struct var
struct teacher{

};
int main(){
    struct student s,*sp;
    struct teacher t;
    sp=&s;
    s.sap=234567;  //dot used with normal struct var
    sp->sap=5667890;  //arrow used with pointer struct var
    return 0;
    //cannot use sp=&t bcoz it is compulsory to use of sme struct or datatype
}