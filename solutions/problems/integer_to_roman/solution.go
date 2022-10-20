func intToRoman(num int) string {
    
    normal := []int{1000,900,500,400,100,90,50,40,10,9,5,4,1};
    roman := []string{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    var res string;
    for i :=0 ; i < 13 ; i++ {
        for num>=normal[i] {
            res += roman[i];
            num -= normal[i];
        }
    }
    return res;   
}