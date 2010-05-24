#!/bin/sh
# Generates the Vala bindings file 'memphis-0.2.vapi' from introspection data (memphis-0.2.gi).
# memphis-0.2.gi can be generated by 'vala-gen-introspect memphis-0.2 memphis-0.2'
vapigen --library memphis-0.2 --pkg cairo memphis-0.2/memphis-0.2.gi --metadata memphis-0.2/memphis-0.2.metadata

