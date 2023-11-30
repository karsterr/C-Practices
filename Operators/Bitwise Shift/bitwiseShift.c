#include <stdio.h>

int main() {
    unsigned int g = 8; /*0000 1000 = 8  */

    unsigned int toRight1 = g >> 1; /*0000 0100 = 4  */
    unsigned int toRight2 = g >> 2; /*0000 0010 = 2  */
    unsigned int toRight3 = g >> 3; /*0000 0000 = 1  */
    unsigned int toRight4 = g >> 4; /*0000 0000 = 0  */
    unsigned int toLeft1 = g << 1; /*0001 0000 = 16 */
    unsigned int toLeft2 = g << 2; /*0010 0000 = 32 */
    unsigned int toLeft3 = g << 3; /*0100 0000 = 64 */
    unsigned int toLeft4 = g << 4; /*1000 0000 = 128*/

    printf("(%d >> 1) = %d\n", g, toRight1);
    printf("(%d >> 2) = %d\n", g, toRight2);
    printf("(%d >> 3) = %d\n", g, toRight3);
    printf("(%d >> 4) = %d\n", g, toRight4);
    printf("(%d << 1) = %d\n", g, toLeft1);
    printf("(%d << 2) = %d\n", g, toLeft2);
    printf("(%d << 3) = %d\n", g, toLeft3);
    printf("(%d << 4) = %d\n", g, toLeft4);
    return 0;
}


