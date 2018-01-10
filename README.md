# C++ API for Battlecode 2018

C++ API using provided C API.
If contributing, try to maintain the performance as much as possible.

## Contributing

- Use C++11 or newer when possible
- Use classes without encapsulation (why encapsulate here? If we miss something
    on the API you will still have access to the low-level C API)
- No inheritance or fancy stuff (only simple classes improving the C API
    functions)
- Don't lose performance. Inline everything and don't copy stuff when not
    needed.
- If you can't abstract without losing performance, rewrite the C stuff into C++
    with good performance and create the C++ API with `_slow` on the end of the
    name.
