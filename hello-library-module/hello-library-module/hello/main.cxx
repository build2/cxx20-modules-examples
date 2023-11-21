import std;
import hello;

int
main ()
{
  hello::say_hello (std::cout, "World");

  hello::greeting = "Hi";
  std::cout << hello::format_hello ("dude") << std::endl;
}
