#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


using namespace std;


void maximize_spending_from_file(const string& input_file, const string& output_file) {
    ifstream infile(input_file);
    ofstream outfile(output_file);

    int n, b;
    infile >> n >> b;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        infile >> prices[i];
    }

    // Initialize a table where dp[i] is the maximum expenditure with budget i
    vector<int> dp(b + 1, 0);
    vector<vector<int>> item_choice(b + 1);

    for (int price : prices) {
        for (int j = b; j >= price; --j) {
            if (dp[j - price] + price > dp[j]) {
                dp[j] = dp[j - price] + price;
                item_choice[j] = item_choice[j - price];
                item_choice[j].push_back(price);
            }
        }
    }

    // The answer is in dp[b]
    const vector<int>& selected_prices = item_choice[b];

    for (int price : selected_prices) {
        outfile << price << endl;
    }

    infile.close();
    outfile.close();
}

int main() {
    string input_file = "input.txt";
    string output_file = "output.txt";
    maximize_spending_from_file(input_file, output_file);
    return 0;
}
