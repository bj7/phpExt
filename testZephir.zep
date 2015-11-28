namespace Test;

class MyTest {
    public function someMethod () {
        var myArray;
        int i = 0, length;

        let myArray = ["hello", 0, 100.25, false, null];

        let length = count(myArray);

        while i < length {
            echo typeof myArray[i], "\n";
            let i++;
        }

        return myArray
    }
}