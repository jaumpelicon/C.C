#include <iostream>
#include <string>

using namespace std;
int main()
{
    int enter,position;
    char aux,result[50] = "",word[50];
    cin >> enter;
    char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (enter--)
    {
        cin >>word>>position;
        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; i < 27; i++)
            {
                if (word[i] == abc[j])
                {
                    int indice = j + position;
                    result[i] = abc[indice];
                }
            }
        }
        cout << result;
    }

    return 0;
}