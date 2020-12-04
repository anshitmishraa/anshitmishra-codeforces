#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int trackOne[n];
        int trackTwo[m];

		vector<int> minimumTrain(101,0);

        minimumTrain[0] = 0;
        
        for (int i = 0; i < n; i++){
            cin >> trackOne[i];
            minimumTrain[trackOne[i]]++;
        }

        for (int i = 0; i < m; i++){
            cin >> trackTwo[i];
            minimumTrain[trackTwo[i]]++;
        }

        int minimumTrains=0;
		
		for(auto i:minimumTrain){
			if(i==2)
				minimumTrains++;
		}
		
        cout << (minimumTrains) << endl;
	

    }

    return 0;
}