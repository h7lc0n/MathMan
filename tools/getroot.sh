#!/bin/bash
#!/usr/bin/bash

if [ "$EUID" -ne 0 ]; then
    date +"%F %H:%M:%S"
    echo -e "\t[W] Permission Denied"
    echo -e "\t[i] Please run as root ..."
    exit 69
fi
