lightning-txdiscard -- Abandon a transaction from txprepare, release inputs
===========================================================================

SYNOPSIS
--------

**txdiscard** *txid*

DESCRIPTION
-----------

The **txdiscard** RPC command releases inputs which were reserved for
use of the *txid* from lightning-txprepare(7).

RETURN VALUE
------------

[comment]: # (GENERATE-FROM-SCHEMA-START)
On success, an object is returned, containing:

- **unsigned\_tx** (hex): the unsigned transaction
- **txid** (txid): the transaction id of *unsigned\_tx*

[comment]: # (GENERATE-FROM-SCHEMA-END)

If there is no matching *txid*, an error is reported. Note that this may
happen due to incorrect usage, such as **txdiscard** or **txsend**
already being called for *txid*.

The following error codes may occur:

- -1: An unknown *txid*.

AUTHOR
------

Rusty Russell <<rusty@rustcorp.com.au>> is mainly responsible.

SEE ALSO
--------

lightning-txprepare(7), lightning-txsend(7)

RESOURCES
---------

Main web site: <https://github.com/ElementsProject/lightning>

[comment]: # ( SHA256STAMP:8186e8767a80b13a133ecfe5a433252514f4a7eb31387f0380c04eb2b2d0a696)
