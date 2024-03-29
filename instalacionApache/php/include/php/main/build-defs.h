/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig S�ther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--prefix=/usr/local/php' '--with-config-file-path=/usr/local/apache/conf' '--libdir=/usr/lib64' '--with-apxs2=/usr/local/apache/bin/apxs' '--enable-sigchild' '--with-mysqli' '--with-mysql' '--with-libdir=/lib64' '--enable-ftp' '--with-zlib' '--with-bz2' '--enable-zip' '--with-pear' '--with-layout=GN' '--enable-ctype' '--with-iconv' '--with-gettext' '--enable-xml' '--with-xmlrpc' '--enable-gd-native-ttf' '--with-imap-ssl' '--enable-soap' '--with-freetype-dir=/usr/include/freetype2/' '--enable-bcmath' '--enable-mbstring' '--enable-sockets' '--with-gd' '--with-png-dir' '--with-openssl' '--with-oci8=instantclient,/usr/lib/oracle/11.2/client64/lib' '--with-pgsql=/usr/local/postgres' '--with-mcrypt' '--enable-shmop' '--enable-sysvsem' '--with-pdo-pgsql=/usr/local/postgres' '--with-pdo-mysql' '--with-curl'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) "
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		"$(mkinstalldirs) '$(INSTALL_ROOT)/usr/local/apache/modules' &&                 $(mkinstalldirs) '$(INSTALL_ROOT)/usr/local/apache/conf' &&                  /usr/local/apache/bin/apxs -S LIBEXECDIR='$(INSTALL_ROOT)/usr/local/apache/modules'                        -S SYSCONFDIR='$(INSTALL_ROOT)/usr/local/apache/conf'                        -i -a -n php5 libphp5.la"
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	""
#define PHP_MYSQL_LIBS		""
#define PHP_MYSQL_TYPE		""
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			"/usr/lib/oracle/11.2/client64/lib"
#define PHP_OCI8_ORACLE_VERSION		"11.1"
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	"/sbin/sendmail"
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         "/usr/lib64/php"
#define PHP_INCLUDE_PATH	".:/usr/lib64/php"
#define PHP_EXTENSION_DIR       "/usr/lib64/extensions/no-debug-zts-20121212"
#define PHP_PREFIX              "/usr/local/php"
#define PHP_BINDIR              "/usr/local/php/bin"
#define PHP_SBINDIR             "/usr/local/php/sbin"
#define PHP_MANDIR              "/usr/local/php/php/man"
#define PHP_LIBDIR              "/usr/lib64"
#define PHP_DATADIR             "${prefix}/share"
#define PHP_SYSCONFDIR          "/usr/local/php/etc"
#define PHP_LOCALSTATEDIR       "/usr/local/php/var"
#define PHP_CONFIG_FILE_PATH    "/usr/local/apache/conf"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
