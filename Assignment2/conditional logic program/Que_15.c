//to determine eligibility for admission to a professional course based on the following criteria:
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marksn Chem>=50 and Total in all three subject
// >=190 or Total in Maths andPhysics >=140 Input the marks obtained inPhysics :65 Input the marks obtained in Chemistry
// :51 Input the marksobtained in Mathematics :72 Total marks of Maths, Physics and Chemistry 188 Total marks of Maths and
// Physics:137 The candidate is not eligible. 

#include <stdio.h>

int main() {
    int mathMarks, physicsMarks, chemMarks, totalMarks, mathPhysicsTotal;

    printf("Enter the marks obtained in:\n");
    printf("Physics: ");
    scanf("%d", &physicsMarks);
    printf("Chemistry: ");
    scanf("%d", &chemMarks);
    printf("Mathematics: ");
    scanf("%d", &mathMarks);

    totalMarks = mathMarks + physicsMarks + chemMarks;
    mathPhysicsTotal = mathMarks + physicsMarks;

    // Check eligibility criteria
    if (mathMarks >= 65 && physicsMarks >= 55 && chemMarks >= 50 && totalMarks >= 190) {
        printf("The candidate is eligible for admission.\n");
    } else if (mathPhysicsTotal >= 140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
