#include<stdio.h>
struct student
{
    float phy;
    float che;
    float math;
    float bio;
    float ban;
    float eng;
};
int main()
{
    struct student res;
    struct student *iqbal;
    iqbal=&res;
    iqbal->phy=56.00;
     iqbal->che=80.00;
     iqbal->math=72.00;
     iqbal->bio=90.00;
     iqbal->ban=80.00;
     iqbal->eng=70.00;
     printf("Result of Physics:%.2f\n",iqbal->phy);
      printf("Result of Chemistry:%.2f\n",iqbal->che);
      printf("Result of Mathematics:%.2f\n",iqbal->math);
      printf("Result of Biology:%.2f\n",iqbal->bio);
      printf("Result of Bangla:%.2f\n",iqbal->ban);
      printf("Result of English:%.2f\n",iqbal->eng);
}
