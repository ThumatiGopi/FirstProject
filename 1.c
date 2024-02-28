#include <stdio.h>

float calculateAverageWaitTime(int n, int arrivalTime[], int burstTime[]) {
    int waitTime[n];
    waitTime[0] = 0; // First process has 0 wait time
    int time = burstTime[0];
    // Calculate wait time for each process
    for (int i = 1; i < n; i++) {
        waitTime[i] = time - arrivalTime[i];
        time += burstTime[i];
    }

    // Calculate total wait time
    int totalWaitTime = 0;
    for (int i = 0; i < n; i++) {
        totalWaitTime += waitTime[i];
    }

    // Calculate average wait time
    float avgwttime = (float)totalWaitTime / n;
    return avgwttime;
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n); 
   
    int arrivalTime[n];
    int burstTime[n];

    for (int i = 0; i < n; i++) {
        printf("Enter arrival time for process %d: ", i + 1);
        scanf("%d", &arrivalTime[i]);
        printf("Enter burst time for process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
    }

    float avgWaitTime = calculateAverageWaitTime(n, arrivalTime, burstTime);

    printf("Average wait time: %.2f\n", avgWaitTime);

    return 0;
}