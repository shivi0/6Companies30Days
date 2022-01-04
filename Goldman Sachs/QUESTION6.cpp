//Greatest Common Divisor of Strings

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        return (str1+str2 == str2+str1) ? str1.substr(0, gcd(str1.length(), str2.length())) : "";
    }
};

//if GCD exists ,the length of this GCD string will be the GCD of lengths of given two strings , so we take gcd(len(a),len(b)) and output the first prefix of this length from either of the strings.