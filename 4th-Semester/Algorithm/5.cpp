#include<bits/stdc++.h>

using namespace std;

int main() {

    string username, country, city;

    // For each user: country -> set of cities
    map<string, map<string, set<string>>> userData;

    // City visit count
    unordered_map<string, int> cityCount;


    ifstream file("travel.txt");
    if (!file) {
        cerr << "Could not open the file.\n";
        return 1;
    }
    while (file >> username >> country >> city) {
        userData[username][country].insert(city);
        cityCount[city]++;
    }

    // Output user travel summary
    cout << "User Travel Summary:\n\n";
    for (const auto& user : userData) {
        cout << user.first << ":\n";

        // Collect countries
        set<string> countries;
        for (const auto& entry : user.second) {
            countries.insert(entry.first);
        }

        // Print countries
        cout << "- Countries: (";
        for (auto it = countries.begin(); it != countries.end(); ++it) {
            if (it != countries.begin()) cout << ", ";
            cout << *it;
        }
        cout << ")\n";

        // Print cities per country
        for (const auto& countryEntry : user.second) {
            cout << "* " << countryEntry.first << ": (";
            const auto& cities = countryEntry.second;
            for (auto it = cities.begin(); it != cities.end(); ++it) {
                if (it != cities.begin()) cout << ", ";
                cout << *it;
            }
            cout << ")\n";
        }
        cout << "\n";
    }

    // Prepare for top 3 most visited cities
    vector<pair<string, int>> cityList(cityCount.begin(), cityCount.end());
    sort(cityList.begin(), cityList.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    cout << "Top 3 Most Visited Cities:\n\n";
    for (int i = 0; i < min(3, (int)cityList.size()); ++i) {
        cout << i + 1 << ". " << cityList[i].first << " (" << cityList[i].second << " visits)\n";
    }


    return 0;
}
