<?php
/**
 * @file
 * views_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function views_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_drealty_listing_type().
 */
function views_features_default_drealty_listing_type() {
  $items = array();
  $items['basic_drealty_listing'] = entity_import('drealty_listing_type', '{
    "weight" : "0",
    "locked" : "0",
    "data" : null,
    "rdf_mapping" : [],
    "fields" : {
      "field_mls_number" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_number",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_images" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "uri_scheme" : "public", "default_image" : 0 },
        "foreign keys" : { "fid" : { "table" : "file_managed", "columns" : { "fid" : "fid" } } },
        "indexes" : { "fid" : [ "fid" ] },
        "field_name" : "field_images",
        "type" : "image",
        "module" : "image",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "-1",
        "deleted" : "0",
        "columns" : {
          "fid" : {
            "description" : "The {file_managed}.fid being referenced in this field.",
            "type" : "int",
            "not null" : false,
            "unsigned" : true
          },
          "alt" : {
            "description" : "Alternative image text, for the image\\u0027s \\u0027alt\\u0027 attribute.",
            "type" : "varchar",
            "length" : 512,
            "not null" : false
          },
          "title" : {
            "description" : "Image title text, for the image\\u0027s \\u0027title\\u0027 attribute.",
            "type" : "varchar",
            "length" : 1024,
            "not null" : false
          },
          "width" : {
            "description" : "The width of the image in pixels.",
            "type" : "int",
            "unsigned" : true
          },
          "height" : {
            "description" : "The height of the image in pixels.",
            "type" : "int",
            "unsigned" : true
          }
        }
      },
      "field_photo_count" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_photo_count",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_counter_id" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : [],
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_counter_id",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_address_mls" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_address_mls",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_province" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_province",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_postal_code" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_postal_code",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_property_size_mls" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_property_size_mls",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_type_mls" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_type_mls",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_gararge" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_gararge",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_description" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "1000" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_description",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "1000", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_place" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_place",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_bedrooms_mls" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : {
          "allowed_values" : {
            "1" : "1",
            "2" : "2",
            "3" : "3",
            "4" : "4",
            "5" : "5",
            "6" : "6",
            "7" : "7",
            "8" : "8"
          },
          "allowed_values_function" : ""
        },
        "foreign keys" : [],
        "indexes" : { "value" : [ "value" ] },
        "field_name" : "field_bedrooms_mls",
        "type" : "list_integer",
        "module" : "list",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_bathrooms_mls" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : {
          "allowed_values" : {
            "1" : "1",
            "2" : "2",
            "3" : "3",
            "4" : "4",
            "5" : "5",
            "6" : "6",
            "7" : "7",
            "8" : "8"
          },
          "allowed_values_function" : ""
        },
        "foreign keys" : [],
        "indexes" : { "value" : [ "value" ] },
        "field_name" : "field_bathrooms_mls",
        "type" : "list_integer",
        "module" : "list",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_price_mls1" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : [],
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_price_mls1",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_type_list" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : {
          "allowed_values" : {
            "COM" : "Commercial\\/Industrial",
            "Condominiums" : "Condo\\/Townhouse",
            "Cottage\\/Rec Properties" : "Cottage\\/Rec Properties",
            "RES" : "Residential",
            "FRM" : "Farms",
            "Vacant Lot(s) " : "Lots and Land",
            "Mobile\\/mini" : "Mobile Home",
            "MUL" : "Multi-Family",
            "Single Family" : "Single Family"
          },
          "allowed_values_function" : ""
        },
        "foreign keys" : [],
        "indexes" : { "value" : [ "value" ] },
        "field_name" : "field_type_list",
        "type" : "list_text",
        "module" : "list",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "varchar", "length" : 255, "not null" : false } }
      }
    },
    "field_instances" : {
      "field_mls_number" : {
        "label" : "Mls number",
        "widget" : {
          "weight" : "1",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 0
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "MLSNUM - MLSNUM"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "MLSNUM - MLSNUM"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "63",
        "field_id" : "59",
        "field_name" : "field_mls_number",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_images" : {
        "label" : "Images",
        "widget" : {
          "weight" : "3",
          "type" : "image_image",
          "module" : "image",
          "active" : 1,
          "settings" : {
            "progress_indicator" : "throbber",
            "preview_image_style" : "thumbnail",
            "manualcrop_enable" : 1,
            "manualcrop_keyboard" : 1,
            "manualcrop_thumblist" : 0,
            "manualcrop_inline_crop" : 0,
            "manualcrop_crop_info" : 1,
            "manualcrop_instant_preview" : 1,
            "manualcrop_instant_crop" : 0,
            "manualcrop_default_crop_area" : 1,
            "manualcrop_maximize_default_crop_area" : 0,
            "manualcrop_styles_mode" : "include",
            "manualcrop_styles_list" : [],
            "manualcrop_require_cropping" : []
          }
        },
        "settings" : {
          "file_directory" : "",
          "file_extensions" : "png gif jpg jpeg",
          "max_filesize" : "",
          "max_resolution" : "",
          "min_resolution" : "",
          "alt_field" : 0,
          "title_field" : 0,
          "default_image" : 0,
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "image",
            "settings" : { "image_style" : "", "image_link" : "" },
            "module" : "image",
            "weight" : 2
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "id" : "65",
        "field_id" : "61",
        "field_name" : "field_images",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_photo_count" : {
        "label" : "Photo count",
        "widget" : {
          "weight" : "4",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 3
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : { "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "PHOTO_COUNT - Number of Photos"
            }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "67",
        "field_id" : "63",
        "field_name" : "field_photo_count",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_counter_id" : {
        "label" : "counter id",
        "widget" : {
          "weight" : "5",
          "type" : "number",
          "module" : "number",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "number_integer",
            "settings" : {
              "thousand_separator" : " ",
              "decimal_separator" : ".",
              "scale" : 0,
              "prefix_suffix" : true
            },
            "module" : "number",
            "weight" : 4
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "COUNTER - Primary Key"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "COUNTER - Primary Key"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "68",
        "field_id" : "64",
        "field_name" : "field_counter_id",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_address_mls" : {
        "label" : "Address",
        "widget" : {
          "weight" : "6",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 5
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "ADDRESS - ADDRESS"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "ADDRESS - ADDRESS"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "72",
        "field_id" : "67",
        "field_name" : "field_address_mls",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_province" : {
        "label" : "Province",
        "widget" : {
          "weight" : "7",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 6
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "PROVINCE - PROVINCE"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "StateOrProvince - Province of street address"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "73",
        "field_id" : "68",
        "field_name" : "field_province",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_postal_code" : {
        "label" : "Postal Code",
        "widget" : {
          "weight" : "8",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 7
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "PROPCODE - Postal Code"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "PROPCODE - Postal Code"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "74",
        "field_id" : "69",
        "field_name" : "field_postal_code",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_property_size_mls" : {
        "label" : "Property Size",
        "widget" : {
          "weight" : "9",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 8
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "PROPERTY_TYPE - PROPERTY_TYPE"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "LOTSIZE - LOTSIZE"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "75",
        "field_id" : "70",
        "field_name" : "field_property_size_mls",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_type_mls" : {
        "label" : "Type",
        "widget" : {
          "weight" : "10",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 9
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "PROPERTY_TYPE - PROPERTY_TYPE"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "TYPE - TYPE"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "76",
        "field_id" : "71",
        "field_name" : "field_type_mls",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_gararge" : {
        "label" : "Gararge",
        "widget" : {
          "weight" : "12",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 12
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : { "conid" : "1", "rid" : "4", "class_id" : "1", "rets_field" : "" },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "GARAGE - GARAGE"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "79",
        "field_id" : "74",
        "field_name" : "field_gararge",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_description" : {
        "label" : "Description",
        "widget" : {
          "weight" : "13",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 13
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : { "conid" : "1", "rid" : "4", "class_id" : "1", "rets_field" : "" },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "REMKS - REMKS"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "80",
        "field_id" : "75",
        "field_name" : "field_description",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_place" : {
        "label" : "Place",
        "widget" : {
          "weight" : "15",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : { "text_processing" : "0", "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "settings" : [],
            "module" : "text",
            "weight" : 15
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "CITY - CITY"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "PROREF - Property Know As \\/ Body of Water \\/ Waterfront Name"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "82",
        "field_id" : "77",
        "field_name" : "field_place",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bedrooms_mls" : {
        "label" : "Bedrooms",
        "widget" : {
          "weight" : "17",
          "type" : "options_select",
          "module" : "options",
          "active" : 1,
          "settings" : []
        },
        "settings" : { "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "list_default",
            "settings" : [],
            "module" : "list",
            "weight" : 17
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "Bedrooms - Total Number of Bedrooms"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "85",
        "field_id" : "80",
        "field_name" : "field_bedrooms_mls",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_bathrooms_mls" : {
        "label" : "Bathrooms",
        "widget" : {
          "weight" : "18",
          "type" : "options_select",
          "module" : "options",
          "active" : 1,
          "settings" : []
        },
        "settings" : { "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "list_default",
            "settings" : [],
            "module" : "list",
            "weight" : 18
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "BathsTotal - Baths Total"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "86",
        "field_id" : "81",
        "field_name" : "field_bathrooms_mls",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_price_mls1" : {
        "label" : "Price",
        "widget" : {
          "weight" : "19",
          "type" : "number",
          "module" : "number",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "number_integer",
            "settings" : {
              "thousand_separator" : " ",
              "decimal_separator" : ".",
              "scale" : 0,
              "prefix_suffix" : true
            },
            "module" : "number",
            "weight" : 20
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "LPRICE - LPRICE"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "ListPrice - Listing Price"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "6", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "88",
        "field_id" : "83",
        "field_name" : "field_price_mls1",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_type_list" : {
        "label" : "Type List",
        "widget" : {
          "weight" : "20",
          "type" : "options_select",
          "module" : "options",
          "active" : 1,
          "settings" : []
        },
        "settings" : { "user_register_form" : false },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "list_default",
            "settings" : [],
            "module" : "list",
            "weight" : 21
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 }
        },
        "required" : 0,
        "description" : "",
        "drealty" : {
          "mappings" : {
            "1_4_ALL" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "1",
              "rets_field" : "PROPERTY_TYPE - PROPERTY_TYPE"
            },
            "1_4_RES" : {
              "conid" : "1",
              "rid" : "4",
              "class_id" : "3",
              "rets_field" : "TYPE - TYPE"
            },
            "1_2_OPEN" : { "conid" : "1", "rid" : "2", "class_id" : "12", "rets_field" : "" }
          },
          "hash_exclude" : 0
        },
        "default_value" : null,
        "id" : "89",
        "field_id" : "84",
        "field_name" : "field_type_list",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      }
    }
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function views_features_image_default_styles() {
  $styles = array();

  // Exported image style: detail_image.
  $styles['detail_image'] = array(
    'label' => 'Detail image',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 375,
          'height' => 260,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'detail_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: listing_image.
  $styles['listing_image'] = array(
    'label' => 'Listing image',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 320,
          'height' => 200,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'listing_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: other_images.
  $styles['other_images'] = array(
    'label' => 'Other images',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 218,
          'height' => 160,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'other_images',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function views_features_node_info() {
  $items = array(
    'home_slider' => array(
      'name' => t('home slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'mls_listings' => array(
      'name' => t('Mls Listings'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'open_houses' => array(
      'name' => t('Open Houses'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
