#!/bin/bash
#!/usr/bin/bash


if [ "$EUID" -ne 0 ]; then
    echo -e "\t[W] Permission Denied"
    echo -e "\t[i] Please run as root ..."
    exit 69     #-- Pretty error code, aint it ?😏
fi
