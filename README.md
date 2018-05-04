# Overloading the stream insertion operator

This repo contains some techniques for overloading the stream insertion operator to provide a direct way to "print" objects on the standard output console.

## Friend functions

Friend functions can be used to provide a function direct access to private data of a class. The benefit here is convenience, however, at the expense of breaking encapsulation to a small degree. See [http://en.cppreference.com/w/cpp/language/friend](http://en.cppreference.com/w/cpp/language/friend)

## Using a public method to use with the operator overload

Alternatively, and preferably in my humble opinion, one can add a public method to the class we wish to insert into an `ostream` that takes a reference to the `ostream`. In being a method of the class, this method has direct access to private data. The benefit here is that we don't break encapsulation of private data.

## Compiling

One can easily compile this demo using `g++` as follows (noting that `$` is the command line prompt and not part of the actual commands used):

```bash
$ g++ *.cpp -o demo
$ ./demo
Hello... 20
Hello... 15
$
```
