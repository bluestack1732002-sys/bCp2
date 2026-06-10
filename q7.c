#include <stdio.h>
int main() {
    int maths_marks, phy_marks, chem_marks, sum_of_mpc,sum_of_mp;
    printf("Enter your details to check if you are eligible for admission to this professional course. \n");
    printf("Enter your marks in Mathematics: ");
    scanf("%d",maths_marks);
    printf("Enter your marks in Physics: ");
    scanf("%d",maths_marks);
    printf("Enter your marks in Chemistry: ");
    scanf("%d",maths_marks);

    sum_of_mpc = maths_marks + phy_marks + chem_marks;
    sum_of_mp = maths_marks + phy_marks;

    if (maths_marks >= 65 && phy_marks >= 55) {
        if (sum_of_mpc >= 190)
        {
            printf("You are eligible. \n");
        }
        
    }
    else if (sum_of_mp >= 140)
    {
        printf("You are eligible. \n");
    }
    else {
        printf("You are not eligible. \n");
    }

    return 0;
}