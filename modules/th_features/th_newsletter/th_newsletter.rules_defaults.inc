<?php
/**
 * @file
 * th_newsletter.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function th_newsletter_default_rules_configuration() {
  $items = array();
  $items['rules_th_subscribe_receive_message'] = entity_import('rules_config', '{ "rules_th_subscribe_receive_message" : {
      "LABEL" : "TH Subscribe receive message",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : [ "entityform_presave" ],
      "DO" : [
        { "mail" : {
            "to" : "[entityform:field-th-email]",
            "subject" : "Thank you for subscribing to our newsletter.",
            "message" : "Thank you for subscribing to our newsletter. You will be receiving news \\u0026 updates from [site:name] periodically.\\u003Cbr\\u003E\\r\\nYou may read about our privacy \\u0026 use policy by clicking \\u003Ca href=\\u0022[site:url]content\\/privacy-and-use-policy\\u0022\\u003Elink\\u003C\\/a\\u003E.\\u003Cbr\\u003E\\r\\nBest,\\u003Cbr\\u003E\\r\\nSite Admin\\u003Cbr\\u003E\\r\\nConnect with us on \\u003Ca href=\\u0022https:\\/\\/www.facebook.com\\/Tech4dem\\u0022\\u003EFacebook\\u003C\\/a\\u003E, \\u003Ca href=\\u0022https:\\/\\/twitter.com\\/tech4dem\\u0022\\u003ETwitter\\u003C\\/a\\u003E and \\u003Ca href=\\u0022https:\\/\\/plus.google.com\\/u\\/0\\/s\\/nditech\\u0022\\u003EGoogle+\\u003C\\/a\\u003E",
            "from" : [ "site:mail" ],
            "language" : [ "entityform:type" ]
          }
        }
      ]
    }
  }');
  return $items;
}
