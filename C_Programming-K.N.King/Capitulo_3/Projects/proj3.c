#include <stdio.h>

int main(void)
{
    int gsi_prefix, group_id, publisher_c, item_num, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&gsi_prefix,&group_id,&publisher_c,&item_num,&check_digit);
    printf("GSl prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", gsi_prefix, group_id, publisher_c, item_num, check_digit);

    return 0;

}
