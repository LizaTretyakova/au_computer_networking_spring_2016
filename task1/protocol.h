#pragma once

#include <cstdint>
#include <cstdio>
#include <string>
#include <type_traits>

using std::string;

enum cmd_code: uint8_t {
    CD = 0,
    LS = 1,
    GET = 2,
    PUT = 3,
    DEL = 4
};

struct request {
    uint8_t cmd;
    string target_path;
    string data;

    request(uint8_t c = 0, string tp = "", string d = ""):
        cmd(c), target_path(tp), data(d) {}
};

struct response {
    bool status_ok;
    string data;

    response(bool ok = false, string d = ""):
        status_ok(ok), data(d) {}
};
