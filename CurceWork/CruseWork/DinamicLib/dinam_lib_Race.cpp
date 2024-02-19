#include <string>
#include "dinam_lib_Race.h"

namespace dinam_lib_Race {

    double camel::time_camel(int distance) const {
        int time_rest_1 = 5, time_rest_all = 8, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (distance) / speed;
        z = (distance / speed) / time_to_rest;
        if (((distance / speed) % time_to_rest) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            return x;
        }

        else if (z == 1) {
            x = y + time_rest_1;
            return x;
        }

        else if (z > 1) {
            x = y + time_rest_1;
            for (int i = 1; i < z; ++i) {
                x += time_rest_all;
            }
            return x;
        }
        return 0;
    }



    double fastcamel::time_fastcamel(int distance) const {
        int time_rest_1 = 5, time_rest_all = 8, z = 0;
        double x = 0, time_rest_2 = 6.5, y = 0;

        y = static_cast <double> (distance) / speed;
        z = (distance / speed) / time_to_rest;
        if (((distance / speed) % time_to_rest) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            return x;
        }

        else if (z == 1) {
            x = y + time_rest_1;
            return x;
        }

        else if (z == 2) {
            x = y + time_rest_1 + time_rest_2;
            return x;
        }

        else if (z > 2) {

            x = y + time_rest_1 + time_rest_2;
            for (int i = 2; i < z; ++i) {
                x += time_rest_all;
            }
            return x;
        }
        return 0;


    }

    double centaur::time_centaur(int distance) const {
        int time_rest_all = 2, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (distance) / speed;
        z = (distance / speed) / time_to_rest;
        if (((distance / speed) % time_to_rest) == 0) {
            z -= 1;
        }

        if (z == 0) {x = y; return x;}

        else if (z > 0) {
            for (int i = 0; i < z; ++i) {
                x += time_rest_all;
            }
            x += y;
            return x;
        }
        return 0;
    }



    double all_terrain_boots::time_all_terrain_boots(int distance) const {
        int time_out_1 = 10, time_out_all = 5, z = 0;
        double x = 0, y = 0;

        y = static_cast <double> (distance) / speed;
        z = (distance / speed) / time_to_rest;
        if (((distance / speed) % time_to_rest) == 0) {
            z -= 1;
        }

        if (z == 0) {
            x = y;
            return x;
        }

        else if (z == 1) {
            x = y + time_out_1;
            return x;
        }

        else if (z > 1) {

            x = y + time_out_1;
            for (int i = 1; i < z; ++i) {
                x += time_out_all;
            }
            return x;
        }
        return 0;
    }


    double eagle::time_eagle(int distance) const {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;
        y = static_cast<double>(distance - (distance * percent_all / 100));
        x = y / speed;
        return x;
    }


    double metla::time_metla(int distance) const {
        int percent_all = distance / 1000;
        double x = 0, y = 0, z = 0;



        if (percent_all > 0) {
            y = static_cast<double>(distance - (distance * percent_all / 100));
            x = y / speed;
            return x;
        }

        else {
            x = static_cast<double>(distance / speed);
            return x;
        }
    }

    double  Magic_carpet::time_Magic_carpet(int distance) const {
        int percent_all = 6;
        double x = 0, y = 0, z = 0;

        if (distance < 1000) {
            int percent_all = 6;
        }

        else if (distance > 1000 && distance < 5000) {
            percent_all = 3;
        }
        else if (distance > 5000 && distance < 10000) {
            percent_all = 10;
        }

        else if (distance > 10000) {
            percent_all = 5;
        }

        y = static_cast<double>(distance - (distance * percent_all / 100));
        x = y / speed;
        return x;
    }
}