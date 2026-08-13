class Solution {
public:
    int maxBottlesDrunk(int nb, int ne) {
        int ans = nb ;
        while(nb>= ne){
            nb = nb- ne;
            ans++;
            nb++;
            ne++;
        }
        return ans;
    }
};