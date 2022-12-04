func dividePlayers(skill []int) int64 {
    
        sort.Ints(skill);
        r := len(skill)-1
        l := 0;
        sum := skill[0] + skill[r];
        var ans int64
        ans = 0
        for l < r {
            if skill[l] + skill[r] != sum  {
                return -1;
            }
            var a int64 
            var b int64 
            a = int64(skill[r])
            b = int64(skill[l])
            ans += a*b
            l++;
            r--;
        }
        
        return ans;
}