#include<stdio.h>
int main()
{
    int code;
    printf("\nLogin 0 Bit \tFileAccess 1 Bit\nAdminAccess 2 Bit\tSystem Settings 3 Bit");
    printf("\nEnter the permission code (integer): ");
    scanf("%d", &code);

    int login= code & 1;
    int fileAccess  = (code >> 1) & 1;
    int adminAccess = (code >> 2) & 1;
    int sysSettings = (code >> 3) & 1;
    printf("\n--- Permissions Enabled ---\n");
    printf("\nLogin          : %s\n", login       ? "Yes" : "No");
    printf("\nFile Access    : %s\n", fileAccess  ? "Yes" : "No");
    printf("\nAdmin Access   : %s\n", adminAccess ? "Yes" : "No");
    printf("\nSystem Settings: %s\n", sysSettings ? "Yes" : "No");

    printf("\n--- Access Level ---\n");
    if (adminAccess && sysSettings)
    {
        printf("\nAdministrator Access\n");
    }
    else if (login && fileAccess)
    {
        printf("\nAdvanced Access\n");
    }
    else if (login)
    {
        printf("\nBasic Access\n");
    }
    else
    {
        printf("\nNo Access (Login bit not set)\n");
    }

    return 0;
}