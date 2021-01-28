#include <fstream>

#include <algorithm>

using namespace std;

const int N = 20;

int main() {
   ifstream in ("bledne.txt");
   ofstream out("wynik.txt");
   int ciag[1000];
   int roz[1000];
   for (int q = 0; q < N; q++) {
      int dlu; in >> dlu;
      for (int i = 0; i < dlu; i++)
         in >> ciag[i];
      for (int i = 0; i + 1 < dlu; i++)
         roz[i] = ciag[i + 1] - ciag[i];

      if (roz[0] != roz[1] && roz[1] == roz[2]) {
         out << ciag[0] << endl;
         continue;
      }

      if (roz[0] != roz[2] && roz[1] != roz[2] && roz[3] == roz[2]) {
         out << ciag[1] << endl;
         continue;
      }

      for (int i = 0; i + 1 < dlu; i++)
         if (roz[i] != roz[0]) {
            out << ciag[i + 1] << endl;
            break;
         }
   }
}
