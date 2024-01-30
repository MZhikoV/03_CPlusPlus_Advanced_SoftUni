#include <iostream>
#include <string>
#include <queue>

using namespace std;

bool isCircleF(queue<long long int> fuelTc, queue<long long int> distTc, int stations)
{
    long long int currFuel = 0;
    for (size_t i = 0; i < stations; i++)
    {
        long long int tempF = fuelTc.front();
        currFuel += tempF;
        fuelTc.pop();
        fuelTc.push(tempF);
        long long int tempD = distTc.front();
        currFuel -= tempD;
        distTc.pop();
        distTc.push(tempD);
        if (currFuel < 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    queue<long long int> fuelT;
    queue<long long int> distT;

    long long int stations;
    cin >> stations;

    for (size_t i = 0; i < stations; i++)
    {
        long long int fuel, dist;
        cin >> fuel >> dist;
        fuelT.push(fuel);
        distT.push(dist);
    }
    long int pump = 0;

    bool isCircle = false;
    while (!isCircleF(fuelT, distT, stations))
    {
        long long int tempF = fuelT.front();
        fuelT.pop();
        fuelT.push(tempF);
        long long int tempD = distT.front();
        distT.pop();
        distT.push(tempD);
        pump++;
    }
    cout << pump << endl;
    return 0;
}